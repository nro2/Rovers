//Rovers
//Nick Robinson


#include <iostream>
#include <iomanip>
#include "stack.h"
#include "comData.h"


using namespace std;

Stack::Stack()
{
	top = nullptr;
}

Stack::~Stack()
{
	while(!isEmpty())
	{
		pop();
	}
}

bool Stack::push(ComData comData)
{
	Node* newNode = new Node;
	newNode->data = comData;
	newNode->next = top;
	top = newNode;
	return true;
}


ComData Stack::peek() const
{
	if(!isEmpty())
	{
		return top->data;
	}
}

bool Stack::isEmpty() const
{
	return top == nullptr;
}

bool Stack::pop()
{
	bool result = false;
	if(!isEmpty())
	{
		Node* current = top;
		top = top->next;
		current->next = nullptr;
		delete current;
		current = nullptr;

		result = true;
	}
}
