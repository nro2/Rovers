//Rovers
//Nick Robinson



#include <iostream>
#include "stack.h"
#include "queue.h"
#include "scandata.h"

using namespace std;

#ifndef ROVERS_H
#define ROVERS_H


class rover{

	public:

		rover(int id, int MAX_RESULTS);
		~rover();
	
		void setID(int idNum);
		int printId();
		void deploy();
		void move(int x, int y);
		void corescan();
		void moveBack(ComData data);
		void dock();
		

	private:

		int MAX;
		int id;
		scandata* scan;
		Queue* q;
		Stack* s;




};
#endif
