//Rovers
//Nick Robinson

#include <iostream>


#ifndef QUEUE
#define QUEUE

class Queue
{


	private:
	
		int front;
		int back;
		int* scan;
		int count;
		int MAX;


	public:
		Queue(int MAX_RESULTS);
		~Queue();

		bool isEmpty() const;
		bool enQueue(int newEntry);
		bool deQueue();

		int peekFront();
};

#endif
