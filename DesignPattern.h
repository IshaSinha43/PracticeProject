#pragma once
#include<iostream>
#include<string>
using namespace std;

	namespace DESIGNPATTERN
	{
		class Singleton
		{
			static Singleton* instance;
			int data;
			Singleton()
			{
				data = 0;
			}
		public:
			static Singleton* getInstance();	
			int GetData();
			void SetData(int data_);

		};


		void PrintSingleton();
	}



	namespace DesignPattern2
	{
		enum AnyTravelType 
		{
			AT_Bus, AT_Train, AT_Flight
		};

		// Library classes
		class AnyTravel
		{
		public:
			virtual void printTravel() = 0;
			virtual void PassengerName() = 0;
			virtual void PassengerOrigin() = 0;
			virtual void PassengerDestination() = 0;
			static AnyTravel* Create(AnyTravelType type);
			virtual ~AnyTravel() {}
		};

		class BusTravel : public AnyTravel 
		{
		public:

		void printTravel();
		void PassengerName();
		void PassengerOrigin();
		void PassengerDestination();
		

		};
		class TrainTravel : public AnyTravel 
		{
		public:
			void printTravel(); 
			void PassengerName();
			void PassengerOrigin();
			void PassengerDestination();
			
		};
		class FlightTravel : public AnyTravel
		{
		public:
			void printTravel(); 
			void PassengerName();
			void PassengerOrigin();
			void PassengerDestination();

		};
		

		

		// Client class
		class Client {
		public:

			// Client doesn't explicitly create objects
			// but passes type to factory method "Create()"
			Client()
			{
				AnyTravelType type = AT_Flight;
				pAnyTravel = AnyTravel::Create(type);


			}
			~Client() 
			{
				if (pAnyTravel) 
				{
					delete pAnyTravel;
					pAnyTravel = NULL;
				}
			}
			AnyTravel* getObject()
			{
				return pAnyTravel;
			}

		private:
			AnyTravel* pAnyTravel;

		};


		void PrintFactoryMethod();

	}




	namespace DesignPattern3
	{
		class ComputerScience
		{
		public:
			virtual void PrintDetail() = 0;
		};

		class Mca : public ComputerScience
		{
		public:
			void PrintDetail();
			
		};

		class Bca : public ComputerScience
		{
		public:
			void PrintDetail(); 
				
		};

		class Commerce
		{
		public:
			virtual void PrintDetail() = 0;
		};

		class Bcom : public Commerce
		{
		public:
			void PrintDetail();
			
		};

		class Mcom : public Commerce
		{
		public:
			void PrintDetail();
			
		};


		class College
		{
		public:
			virtual ComputerScience* createComputerScience() = 0;
			virtual Commerce* createCommerce() = 0;
		};

		class ComputerScienceDepartment : public College
		{
		public:
			ComputerScience* createComputerScience()
			{
				return new Mca;
			}
			Commerce* createCommerce()
			{
				return new Bcom;
			}
		};

		class CommerceDepartment : public College
		{
		public:
			ComputerScience* createComputerScience()
			{
				return new Bca;
			}

			Commerce* createCommerce()
			{
				return new Mcom;
			}
		};
		void PrintAbstractMethod();
	}