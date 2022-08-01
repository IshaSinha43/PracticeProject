
#ifndef _CONSTRUCTOR_
#define _CONSTRUCTOR_

#include<iostream>
#include<string>

using namespace std;

namespace GAME
{

    class GamingChannel
    {
    private:
        string Name;
        int SubscriberCount = 0;
        int VideoDownloaded = 0;
        string PublisherName;


    public:
        GamingChannel();//default constructor

        //constructor with parameters calling
        GamingChannel(string name, int subscribercount, int videodownloaded);

        GamingChannel(string nm, int scount, int vdownload, string pnm);//parameterised constructor

        //Destructor
        ~GamingChannel();

        int SetGamingChannel(string nm, int scount, int vdownload, string pnm);//function for set vaLUE

        int DisplayGamingChannel();//function for display

        int PrintGamingInfo();

        string GetPublisherName() const;

    };

    

}

#endif