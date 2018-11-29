//Rovers
//Nick Robinson

//comData.h

#include <iostream>

using namespace std;

#ifndef COMDATA_H
#define COMDATA_H

class ComData {

	public:

		ComData();

		void setXCoord(int xc);
		void setYCoord(int yc);

		int getXCoord();
		int getYCoord();

	private:

		int xCoord;
		int yCoord;
};

#endif
