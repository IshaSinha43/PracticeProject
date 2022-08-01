#include "DesignPattern.h"

using namespace DESIGNPATTERN;
Singleton* Singleton::instance=nullptr;
Singleton* Singleton::getInstance()
{
	if (!instance)
	{
		instance = new Singleton();
	}
	return instance;
}

int DESIGNPATTERN::Singleton::GetData()
{
	return this->data;
}

void DESIGNPATTERN::Singleton::SetData(int data_)
{
	this->data = data_;
}



void DESIGNPATTERN::PrintSingleton()
{
	Singleton* s = Singleton::getInstance();
	cout << s->GetData() <<endl;
	s->SetData(rand());
	cout << s->GetData() << endl;
}

// Factory method to create objects of different types.
		// Change is required only in this function to create a new object type
DesignPattern2::AnyTravel* DesignPattern2::AnyTravel::Create(AnyTravelType type)
{
	if (type == AT_Bus)
		return new BusTravel();
	else if (type == AT_Train)
		return new TrainTravel();
	else if (type == AT_Flight)
		return new FlightTravel();
	else return NULL;
}

void DesignPattern2::BusTravel::printTravel()
{
	cout << "Travel from Bus" << endl;
}

void DesignPattern2::BusTravel::PassengerName()
{

	cout << "entered passenger name is: xyz" << endl;
}

void DesignPattern2::BusTravel::PassengerOrigin()
{
	cout << "entered passenger origin is: Noida" << endl;
}

void DesignPattern2::BusTravel::PassengerDestination()
{
	cout << "entered passenger destination is: Delhi" << endl;
}

void DesignPattern2::TrainTravel::printTravel()
{
}

void DesignPattern2::TrainTravel::PassengerName()
{
	cout << "entered passenger name is: Ankita" << endl;
}

void DesignPattern2::TrainTravel::PassengerOrigin()
{
	cout << "entered passenger origin is: varanasi" << endl;
}

void DesignPattern2::TrainTravel::PassengerDestination()
{
	cout << "entered passenger destination is: Delhi" << endl;
}

void DesignPattern2::FlightTravel::printTravel()
{
	cout << "Travel from Flight" << endl;
}

void DesignPattern2::FlightTravel::PassengerName()
{
	cout << "entered passenger name is: Isha" << endl;
}

void DesignPattern2::FlightTravel::PassengerOrigin()
{
	cout << "entered passenger origin is: Patna" << endl;
}

void DesignPattern2::FlightTravel::PassengerDestination()
{
	cout << "entered passenger destination is: Delhi" << endl;
}

void DesignPattern2::PrintFactoryMethod()
{
	Client* pClient = new Client();
	AnyTravel* pAnyTravel = pClient->getObject();
	pAnyTravel->printTravel();
	pAnyTravel->PassengerName();
	pAnyTravel->PassengerOrigin();
	pAnyTravel->PassengerDestination();

	delete pClient;
}

void DesignPattern3::Mcom::PrintDetail()
{
	cout << "Commerce Department:MCom \n";
}

void DesignPattern3::Mca::PrintDetail()
{
	cout << "Computer Scienece Department:MCA \n";
}

void DesignPattern3::Bca::PrintDetail()
{
	cout << "Computer Scienece Department:BCA \n";
}

void DesignPattern3::Bcom::PrintDetail()
{
	cout << "Commerce Department:BCom \n";
}

void DesignPattern3::PrintAbstractMethod()
{
	College* college;
	ComputerScience* cs;
	Commerce* com;

	college = new ComputerScienceDepartment;
	cs = college->createComputerScience();
	cs->PrintDetail();
	com = college->createCommerce();
	com->PrintDetail();

	college = new CommerceDepartment;
	cs = college->createComputerScience();
	cs->PrintDetail();
	com = college->createCommerce();
	com->PrintDetail();

}
