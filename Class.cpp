#include"class.h"

void  VEHICLES::PrintVehicleInfo(){
VEHICLES::Bike obj1;
obj1.brand = "Bullet";
obj1.model = "Royal enfield";
obj1.purchase_year = 2020;

//create another object of class Bike

VEHICLES::Bike obj2;
obj2.brand = "KTM";
obj2.model = "s1";
obj2.purchase_year = 2022;
cout << "Using Class & Object " << endl << "------------------" << endl;
cout << "Brand: " << obj1.brand << endl;
cout << "Model: " << obj1.model << endl;
cout << "Purchse_year" << obj1.purchase_year << endl;
cout << "Brand: " << obj2.brand << endl;
cout << "Model: " << obj2.model << endl;
cout << "Purchse_year" << obj2.purchase_year << endl << endl;
}


