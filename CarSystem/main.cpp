#include "String.h"
#include <iostream>
#include "OwnerCarInfo.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"
#include "Trailer.h"

using namespace std;

int main()
{
    String s;
    s.setData("hello");
    cout << s[0] << endl;

    int EGN1[10] = {9,7,0,6,1,6,0,0,0,0};
    OwnerCarInfo p1;
    p1.setName("Evgeniy");
    p1.setDate("24.07.2016");
    p1.setPlate("H0001BP");
    p1.setColor("Grey");
   // cout << p1.getAge(EGN1) << endl;

    Car c1("Evgeniy", EGN1, "24.07.2016", "H0001BP", "Grey", Engine::Diesel, 131, 1900, 4, EuroStandart::Euro5, Coupe::Sedan);
    cout << c1.getGrajdanska() << endl;
    return 0;
}
