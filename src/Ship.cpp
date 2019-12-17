/*
 * Ship.cpp
 *
 *  Created on: 16 нояб. 2017 г.
 *      Author: pavel
 */

#include <Ship.h>

Ship::Ship(int x,int y) : _status(true)
{
    _coord.x = x;
    _coord.y = y;
}

Ship::~Ship()
{
}

bool Ship::getStatus()
{
    return _status;
}

bool Ship::fire(int x,int y)
{
    return (_coord.x == x && _coord.y == y) ? setStatus(false), true : false;
}

void Ship::setStatus(bool value)
{
    _status = value;
}

Point Ship::getPoint()
{
    return Point{_coord.x, _coord.y};
}
