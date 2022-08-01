#include "BitmapImporter.h"

bool BitmapImporter::CreateImage(int width, int height, BYTE R, BYTE G, BYTE B)
{
	const int fileheadersize = 14;
	const int infoheadersize = 40;

	BYTE PadingData[] = { 0, 0, 0 };
	int Padding = (4 - (width * sizeof(BGR)) % 4) % 4;
	int RowSize = width * sizeof(BGR) + Padding;
	int DataSize = RowSize * height;

	if (m_data) {
		Release();
	}

	m_fileheader.bfSize = DataSize + fileheadersize + infoheadersize;
	m_fileheader.bfOffBits = fileheadersize + infoheadersize;
	m_fileheader.bfType = 19778;
	m_fileheader.bfReserved1 = 0;
	m_fileheader.bfReserved2 = 0;

	m_infoheader.biBitCount =24;
	m_infoheader.biClrImportant = 0;
	m_infoheader.biClrUsed = 0;
	m_infoheader.biCompression = BI_RGB;
	m_infoheader.biHeight =height;
	m_infoheader.biPlanes = 1;
	m_infoheader.biSize = 40;
	m_infoheader.biSizeImage = DataSize + fileheadersize + infoheadersize;
	m_infoheader.biWidth =width;
	m_infoheader.biYPelsPerMeter = 0;
	m_infoheader.biXPelsPerMeter = 0;

	m_data = new BGR * [height];
	for (int i = 0; i < height; i++)
	{
		m_data[i] = new BGR[width];
	}

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			m_data[i][j].B = B;
			m_data[i][j].G = G;
			m_data[i][j].R = R;
		}
	}
	return true;
}






bool BitmapImporter::ReadBitmap(const char* filePath)
{
	ifstream f;
	f.open(filePath, ios::in | ios::binary);
	if (!f.is_open())
	{
		cout << "file could not open" << endl;
		return false;
	}
		
	const int fileheadersize = 14;
	const int infoheadersize =40;

	f.read(reinterpret_cast<char*> (&m_fileheader), fileheadersize);

	f.read(reinterpret_cast<char*> (&m_infoheader), infoheadersize);


	int _Width = m_infoheader.biWidth;
	int _Height = m_infoheader.biHeight;
	BYTE PadingData[] = { 0, 0, 0 };
	int Padding = (4 - (_Width * sizeof(BGR)) % 4) % 4;
	int RowSize = _Width * sizeof(BGR) + Padding;
	int DataSize = RowSize * _Height;

	BYTE* tmpData = new BYTE[DataSize];
	m_data = new BGR * [_Height];
	f.seekg(m_fileheader.bfOffBits, ios::beg);
	f.read(reinterpret_cast<char*>(tmpData), DataSize);
	f.close();
	//2D array
	for(int  i=0;i< _Height;i++)
	{
			m_data[i] = new BGR[_Width];
	}
	//for counting pixel;
	int pixelctr = 0;
	for (int i = 0; i < _Height; i++)
	{
		for (int j = 0; j < _Width; j++) 
		{
			m_data[i][j].B = tmpData[pixelctr + 0];
			m_data[i][j].G = tmpData[pixelctr + 1];
			m_data[i][j].R = tmpData[pixelctr + 2];
			pixelctr += 3;
		}
		pixelctr += Padding;
	}
	delete[] tmpData;
	return true;
}

bool BitmapImporter::WriteBitmap(const char* filePath)
{


	int _Width = m_infoheader.biWidth;
	int _Height = m_infoheader.biHeight;
	BYTE PadingData[] = { 0, 0, 0 };
	int Padding = (4 - (_Width * sizeof(BGR)) % 4) % 4;
	int RowSize = _Width * sizeof(BGR) + Padding;
	int DataSize = RowSize * _Height;
	 
	ofstream of;
	of.open(filePath, ios::out | ios::binary);
	const int fileheadersize = 14;
	const int infoheadersize = 40;
	of.write(reinterpret_cast<char*>(&m_fileheader), fileheadersize);

	of.write(reinterpret_cast<char*>(&m_infoheader), infoheadersize);
	for (int i = 0; i < _Height; i++)
	{
		for (int j = 0; j < _Width; j++)
		{
			of.write(reinterpret_cast<char*>(&m_data[i][j]), sizeof(BGR));
		}
		of.write(reinterpret_cast<char*>(PadingData), Padding);

	}
	of.close();
	return false;
}

BitmapImporter::BGR BitmapImporter::GetPixel(int x, int y)
{
	return  m_data[y][x];
}

void BitmapImporter::SetPixel(int x, int y, BYTE R, BYTE G, BYTE B)
{
	 m_data[y][x].B=B;
	 m_data[y][x].G=G;
	 m_data[y][x].R=R;

}
void BitmapImporter::Release()
{
	int height=m_infoheader.biHeight;
	for (int i = 0; i < height; i++)
	{
		delete[] m_data[i];
	}
	delete[] m_data;

}
