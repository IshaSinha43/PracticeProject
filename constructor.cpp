#include "constructor.h"

GAME::GamingChannel::~GamingChannel()
{

}

//Creation of Constructor with parameter

int GAME::GamingChannel::SetGamingChannel(string nm, int scount, int vdownload, string pnm)
{
    Name = nm;
    SubscriberCount = scount;
    VideoDownloaded = vdownload;
    PublisherName = pnm;
    return 0;

}
  
int GAME::GamingChannel::DisplayGamingChannel()
{

    cout << "Name: " << " " << Name << endl;
    cout << "Subscriber: " << " " << SubscriberCount << endl;
    cout << "VideoDownloaded: " << " " << VideoDownloaded << endl;
    cout << "Publisher Name: " << " " << PublisherName << endl << "-----------------" << endl;
    return 0;
}


//   //Creation of Constructor with parameters

GAME::GamingChannel::GamingChannel()
{
}

GAME::GamingChannel::GamingChannel(string name, int subscribercount, int videodownloaded)
{

}

GAME::GamingChannel::GamingChannel(string nm, int scount, int vdownload,string pnm)
{
    Name = nm;
    SubscriberCount= scount;
    VideoDownloaded= vdownload;
    PublisherName=pnm;
}

int GAME::GamingChannel::PrintGamingInfo()
{
    return 0;
}

string GAME::GamingChannel::GetPublisherName() const 
{
    return PublisherName;
}
