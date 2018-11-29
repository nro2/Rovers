//Rovers
//Nick Robinson

#include <iostream>
#include "rover.h"
#include "queue.h"
#include "stack.h"
#include "scandata.h"

using namespace std;

rover::rover(int idNum, int MAX_RESULTS)
{
	q = new Queue(MAX_RESULTS); 
	MAX = MAX_RESULTS;
	s = new Stack;
	id = 0;
	setID(idNum);
	scandata scan;
}


rover::~rover()
{

	delete s;	
	delete q;
}

void rover::setID(int idNum)
{
	id = idNum;
}

int rover::printId()
{
	return id;
}

void rover::deploy()
{
	ComData data;
	cout << "Rover (ID " << printId() << ") deploying..." << endl;
	int x = 0;
	int y = 0;
	data.setXCoord(x);
	data.setYCoord(y);
	s->push(data);
	cout << "Rover (ID " << printId() << ") ready." << endl;
}

void rover::move(int x, int y)
{
	ComData data;
	data.setXCoord(x);
	data.setYCoord(y);
	s->push(data);
	cout << "Rover (ID " << printId() << ") moving to location " << x << ", " << y << "." << endl;
}


void rover::corescan()
{
	ComData data;
	cout << "Rover (ID " << printId() << ") scanning." << endl;
	data = s->peek();
	
	int x = data.getXCoord();
	int y = data.getYCoord();
	int entry = scan->getScandata(x, y);
	q->enQueue(entry);
	
}

void rover::moveBack(ComData data)
{
	int x = data.getXCoord();
	int y = data.getYCoord();
	cout << "Rover (ID " << printId() << ") moving to location " << x << ", " << y << "." << endl;
}

void rover::dock()
{
	cout << "Rover (ID " << printId() << ") returning to base." << endl;
	ComData data;
	s->pop();
	while(!s->isEmpty())
	{
		data = s->peek();
		moveBack(data);
		s->pop();
	}

	cout << "Rover (ID " << printId() << ") at base. Sending results..." << endl;
	while(!q->isEmpty())
	{
		cout << "Rover (ID " << printId() << ") result: " << q->peekFront() << endl;
		q->deQueue(); 	
	}

	cout << "Rover (ID " << printId() << ") result transmission complete." << endl;
	cout << "Rover (ID " << printId() << ") docked." << endl;
}


