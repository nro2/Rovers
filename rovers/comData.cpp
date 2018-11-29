//Rovers
//Nick Robinson

//comData.cpp

#include <iostream>
#include "comData.h"

using namespace std;

ComData::ComData()
{
	xCoord = 0;
	yCoord = 0;
}

void ComData::setXCoord(int xc)
{
	xCoord = xc;
}

void ComData::setYCoord(int yc)
{
	yCoord = yc;
}

int ComData::getXCoord()
{
	return xCoord;
}

int ComData::getYCoord()
{
	return yCoord;
}
