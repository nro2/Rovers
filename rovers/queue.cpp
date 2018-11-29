//Rovers
//Nick Robinson

#include <iostream>
#include <iomanip>
#include "queue.h"

using namespace std;




Queue::Queue(int MAX_RESULTS)
{
	scan = new int[MAX_RESULTS];
	front = 0;
	back = (MAX - 1);
	count = 0;
	MAX = MAX_RESULTS;
	//back = (MAX - 1);	
}

Queue::~Queue()
{
	delete [] scan;
}

bool Queue::isEmpty() const
{
	return count == 0;
}

bool Queue::enQueue(int newEntry)
{
	bool result = false;
	if(count < MAX)
	{
		back = (back+1) % MAX;
		scan[back] = newEntry;
		count++;
		result = true;
	}
	return result;
}

bool Queue::deQueue()
{
	bool result = false;
	if(!isEmpty())
	{
		front = (front+1) % MAX;
		count--;
		result = true;
	}
	return result;
}

int Queue::peekFront()
{
	if(!isEmpty())
	{
		return scan[front];
	}
}
