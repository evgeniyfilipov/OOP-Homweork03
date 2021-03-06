#include "OwnerCarInfo.h"
#include <iostream>

using namespace std;


bool OwnerCarInfo::isLegit(String _plate) const
{
    if (_plate[0] == 'A' ||
        _plate[0] == 'B' ||
        _plate[0] == 'C' ||
        _plate[0] == 'E' ||
        _plate[0] == 'K' ||
        _plate[0] == 'M' ||
        _plate[0] == 'P' ||
        _plate[0] == 'T' ||
        _plate[0] == 'X' ||
        _plate[0] == 'Y' ||
        _plate[0] == 'H')
        {
            if (_plate[1] >= '0' && _plate[1] <= '9' &&
                _plate[2] >= '0' && _plate[2] <= '9' &&
                _plate[3] >= '0' && _plate[3] <= '9' &&
                _plate[4] >= '0' && _plate[4] <= '9')
                {
                    // Тук всичко свършвва с легитимацията :D
                    if(_plate[5] == 'A' ||
                       _plate[5] == 'B' ||
                       _plate[5] == 'C' ||
                       _plate[5] == 'E' ||
                       _plate[5] == 'H' ||
                       _plate[5] == 'K' ||
                       _plate[5] == 'M' ||
                       _plate[5] == 'O' ||
                       _plate[5] == 'P' ||
                       _plate[5] == 'T' ||
                       _plate[5] == 'X' &&
                       _plate[6] == 'A' ||
                       _plate[6] == 'B' ||
                       _plate[6] == 'C' ||
                       _plate[6] == 'E' ||
                       _plate[6] == 'H' ||
                       _plate[6] == 'K' ||
                       _plate[6] == 'M' ||
                       _plate[6] == 'O' ||
                       _plate[6] == 'P' ||
                       _plate[6] == 'T' ||
                       _plate[6] == 'X')
                    {
                        return true;
                    }
                }
        }
    if (_plate[0] == 'C' && _plate[1] == 'A' ||
        _plate[0] == 'C' && _plate[1] == 'B' ||
        _plate[0] == 'C' && _plate[1] == 'C' ||
        _plate[0] == 'C' && _plate[1] == 'O' ||
        _plate[0] == 'C' && _plate[1] == 'T' ||
        _plate[0] == 'C' && _plate[1] == 'H' ||
        _plate[0] == 'C' && _plate[1] == 'M' ||
        _plate[0] == 'B' && _plate[1] == 'H' ||
        _plate[0] == 'B' && _plate[1] == 'P' ||
        _plate[0] == 'B' && _plate[1] == 'T' ||
        _plate[0] == 'E' && _plate[1] == 'B' ||
        _plate[0] == 'E' && _plate[1] == 'H' ||
        _plate[0] == 'K' && _plate[1] == 'H' ||
        _plate[0] == 'O' && _plate[1] == 'B' ||
        _plate[0] == 'P' && _plate[1] == 'A' ||
        _plate[0] == 'P' && _plate[1] == 'B' ||
        _plate[0] == 'P' && _plate[1] == 'K' ||
        _plate[0] == 'P' && _plate[1] == 'P' ||
        _plate[0] == 'T' && _plate[1] == 'X')
        {
            if (_plate[2] >= '0' && _plate[2] <= '9' &&
                _plate[3] >= '0' && _plate[3] <= '9' &&
                _plate[4] >= '0' && _plate[4] <= '9' &&
                _plate[5] >= '0' && _plate[5] <= '9')
                {
                    if(_plate[6] == 'A' ||
                       _plate[6] == 'B' ||
                       _plate[6] == 'C' ||
                       _plate[6] == 'E' ||
                       _plate[6] == 'H' ||
                       _plate[6] == 'K' ||
                       _plate[6] == 'M' ||
                       _plate[6] == 'O' ||
                       _plate[6] == 'P' ||
                       _plate[6] == 'T' ||
                       _plate[6] == 'X' &&
                       _plate[7] == 'A' ||
                       _plate[7] == 'B' ||
                       _plate[7] == 'C' ||
                       _plate[7] == 'E' ||
                       _plate[7] == 'H' ||
                       _plate[7] == 'K' ||
                       _plate[7] == 'M' ||
                       _plate[7] == 'O' ||
                       _plate[7] == 'P' ||
                       _plate[7] == 'T' ||
                       _plate[7] == 'X')
                    {
                        return true;
                    }
                }
        }

    return false;
}

double OwnerCarInfo::getCoef(String _plate) const
{
    if(isLegit(_plate) == true)
    {
        if (_plate[0] == 'A')
            return 1.2;
        if (_plate[0] == 'H')
            return 1.0;
        if (_plate[0] == 'B')
            return 0.9;
        if (_plate[0] == 'C')
            return 0.8;
        if (_plate[0] == 'P')
            return 0.9;
        if (_plate[0] == 'T')
            return 1.0;
        if (_plate[0] == 'E')
            return 0.6;
        if (_plate[0] == 'X')
            return 0.7;
        if (_plate[0] == 'Y')
            return 1.1;
        if (_plate[0] == 'M')
            return 0.6;
        if (_plate[0] == 'K')
            return 0.7;
        if (_plate[0] == 'C' && _plate[1] == 'A')
            return 0.8;
        if (_plate[0] == 'C' && _plate[1] == 'B')
            return 0.8;
        if (_plate[0] == 'C' && _plate[1] == 'O')
            return 0.8;
        if (_plate[0] == 'C' && _plate[1] == 'C')
            return 1.1;
        if (_plate[0] == 'C' && _plate[1] == 'T')
            return 0.7;
        if (_plate[0] == 'C' && _plate[1] == 'M')
            return 0.8;
        if (_plate[0] == 'C' && _plate[1] == 'H')
            return 0.6;
        if (_plate[0] == 'P' && _plate[1] == 'A')
            return 0.7;
        if (_plate[0] == 'P' && _plate[1] == 'B')
            return 0.8;
        if (_plate[0] == 'P' && _plate[1] == 'K')
            return 0.7;
        if (_plate[0] == 'P' && _plate[1] == 'P')
            return 1.0;
        if (_plate[0] == 'B' && _plate[1] == 'H')
            return 0.5;
        if (_plate[0] == 'B' && _plate[1] == 'P')
            return 0.7;
        if (_plate[0] == 'B' && _plate[1] == 'T')
            return 0.6;
        if (_plate[0] == 'K' && _plate[1] == 'H')
            return 0.7;
        if (_plate[0] == 'O' && _plate[1] == 'B')
            return 0.6;
        if (_plate[0] == 'E' && _plate[1] == 'H')
            return 0.8;
        if (_plate[0] == 'E' && _plate[1] == 'B')
            return 0.9;
        if (_plate[0] == 'T' && _plate[1] == 'X')
            return 1.0;
    }

}

OwnerCarInfo::OwnerCarInfo(String _name, int _EGN[10], String _date, String _plate, String _color)
{
    setName(_name);
    setEGN(_EGN);
    setDate(_date);
    setPlate(_plate);
    setColor(_color);
}
OwnerCarInfo::OwnerCarInfo()
{
    setName("");
    setEGNnull();
    setDate("");
    setPlate("");
    setColor("");

}

OwnerCarInfo::OwnerCarInfo(const OwnerCarInfo& other)
{
    setName(other.name);
    setEGN(other.EGN);
    setDate(other.date);
    setPlate(other.plate);
    setColor(other.color);
}

OwnerCarInfo& OwnerCarInfo::operator=(const OwnerCarInfo& other)
{
    if (this == &other)
        return *this;

    setName(other.name);
    setEGN(other.EGN);
    setDate(other.date);
    setPlate(other.plate);
    setColor(other.color);
    return *this;
}

OwnerCarInfo::~OwnerCarInfo()
{
}

String OwnerCarInfo::getName() const
{
    return name;
}

const int* OwnerCarInfo::getEGN() const
{
    return EGN;
}

String OwnerCarInfo::getPlate() const
{
    return plate;
}

String OwnerCarInfo::getDate() const
{
    return date;
}

String OwnerCarInfo::getColor() const
{
    return color;
}


void OwnerCarInfo::setName(String _name)
{
    name = _name;
}

void OwnerCarInfo::setEGN(const int _EGN[10])
{
    for (size_t i = 0; i < 10; i++)
    {
        EGN[i] = _EGN[i];
    }
}

void OwnerCarInfo::setPlate(String _plate)
{
    plate = _plate;
}

void OwnerCarInfo::setDate(String _date)
{
    date = _date;
}

void OwnerCarInfo::setColor(String _color)
{
    color = _color;
}

void OwnerCarInfo::setEGNnull()
{
    for(size_t i = 0; i < 10; i++)
    {
        EGN[i] = 0;
    }
}

size_t OwnerCarInfo::getAge(const int _EGN[10]) const
{
    return 2017 - (1900 + EGN[0] * 10 + EGN[1]);
}
