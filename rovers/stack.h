//Rovers
//Nick Robinson

#include <iostream>
#include "comData.h"

using namespace std;

#ifndef STACK
#define STACK

struct Node{
	ComData data;
	Node* next;
};


class Stack{
	

	private:
	Node* top;

	public:
	Stack();
	~Stack();

	bool isEmpty() const;
	bool push(ComData comdata);
	bool pop();
	ComData peek() const;
};

#endif

