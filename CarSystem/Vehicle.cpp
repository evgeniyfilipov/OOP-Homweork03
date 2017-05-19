#include "Vehicle.h"
#include <iostream>

using namespace std;


Vehicle::Vehicle(String _name, int _EGN[10], String _date, String _plate, String _color,
            Engine _typeEngine, size_t _horsePower, size_t _cc, size_t _cylinders,
            EuroStandart _eStandart) : OwnerCarInfo(_name, _EGN, _date, _plate, _color)
            {
                setTypeEngine(_typeEngine);
                setHorsePower(_horsePower);
                setCC(_cc);
                setCylinders(_cylinders);
                setStandart(_eStandart);
            }

Vehicle::Vehicle() : OwnerCarInfo()
{
    setTypeEngine(Engine::None);
    setHorsePower(0);
    setCC(0);
    setCylinders(0);
    setStandart(EuroStandart::None);
}
Vehicle::Vehicle(const Vehicle& other) : OwnerCarInfo(other)
{
    setTypeEngine(other.typeEngine);
    setHorsePower(other.horsePower);
    setCC(other.cc);
    setCylinders(other.cylinders);
    setStandart(other.eStandart);
}

Vehicle Vehicle::operator=(const Vehicle& other)
{
    if (this == &other)
        return *this;

    OwnerCarInfo::operator=(other);
    setTypeEngine(other.typeEngine);
    setHorsePower(other.horsePower);
    setCC(other.cc);
    setCylinders(other.cylinders);
    setStandart(other.eStandart);
    return *this;
}

Vehicle::~Vehicle()
{
}

void Vehicle::getTypeEngine() const
{
    switch(typeEngine)
    {
    case Engine::None:
        cout << "None" << endl;
    case Engine::Diesel:
        cout << "Diesel"<<endl;
    case Engine::Petrol:
        cout << "Petrol" << endl;
    }
}

Engine Vehicle::getTypeEngineIdx() const
{
    return typeEngine;
}

size_t Vehicle::getHorsePower() const
{
    return horsePower;
}

size_t Vehicle::getCC() const
{
    return cc;

}

size_t Vehicle::getCylinders() const
{
    return cylinders;
}

void Vehicle::getStandart() const
{
    switch(eStandart)
    {
    case EuroStandart::None:
        cout << "None" << endl;
    case EuroStandart::Euro1:
        cout << "Euro 1" << endl;
    case EuroStandart::Euro2:
        cout << "Euro 2" << endl;
    case EuroStandart::Euro3:
        cout << "Euro 3" << endl;
    case EuroStandart::Euro4:
        cout << "Euro 4" << endl;
    case EuroStandart::Euro5:
        cout << "Euro 5" << endl;
    case EuroStandart::Euro6:
        cout << "Euro 6" << endl;
    }
}

EuroStandart Vehicle::getStandartIdx() const
{
    return eStandart;
}

void Vehicle::setTypeEngine(Engine _typeEngine)
{
    typeEngine = _typeEngine;
}

void Vehicle::setHorsePower(size_t _horsePower)
{
    horsePower = _horsePower;
}

void Vehicle::setCC(size_t _cc)
{
    cc = _cc;
}

void Vehicle::setCylinders(size_t _cylinders)
{
    cylinders = _cylinders;
}

void Vehicle::setStandart(EuroStandart _eStandart)
{
    eStandart = _eStandart;
}

int Vehicle::getTax() const
{
    int startTax = 0;
    if (OwnerCarInfo::isLegit(this->getPlate()) == true)
    {
        if(this->getHorsePower() <= 101)
            startTax = 10;
        if(this->getHorsePower() > 101)
            startTax = 100;
        return (startTax + this->getHorsePower()) * OwnerCarInfo::getCoef(this->getPlate());
    }
    else
    {
        cout << "Invalid registration plate!" << endl;
    }

}

int Vehicle::getGrajdanska() const
{
    int tax = 0;
    if (OwnerCarInfo::isLegit(this->getPlate()) == true)
    {
        if (getAge(this->getEGN()) >= 20 && getAge(this->getEGN()) < 30)
            tax = 40;
         if (getAge(this->getEGN()) >= 30 && getAge(this->getEGN()) < 45)
            tax = 30;
        if (getAge(this->getEGN()) >= 45)
            tax = 20;
        return (50 + tax) * OwnerCarInfo::getCoef(this->getPlate());
    }
    else
    {
        cout << "Invalid registration plate!" << endl;
    }
}
