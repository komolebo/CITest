/*
 * BigShip.cpp
 *
 *  Created on: 16 нояб. 2017 г.
 *      Author: pavel
 */

#include <BigShip.h>

BigShip::BigShip(int x,int y,Orientation o,int deck) : Ship(x, y), _orientation(o), _decks(deck)
{
}

BigShip::~BigShip()
{
}

bool BigShip::fire(int x,int y)
{
 return false;
}
bool BigShip::getStatus()
{
 return true;
}
Point BigShip::getPoint()
{
	return Point();
}

