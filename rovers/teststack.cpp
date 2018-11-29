#include <iostream>
#include "stack.h"

using namespace std;

void dumpStack(Stack &s)
{
    cout << "Dumping the stack" << endl;
    while (!s.isEmpty())
    {
	ComData result = s.peek();
	cout << "Popping!" << endl;
	s.pop();
	
	cout << "Value: " << result.getXCoord() << ", " << result.getYCoord() << endl;
    }
}

void pushHelper(Stack &s,int x, int y)
{
    ComData entry;

    entry.setXCoord(x);
    entry.setYCoord(y);
    s.push(entry);
}

int main()
{
    Stack s;
    ComData entry;

    pushHelper(s,1,1);
    dumpStack(s);

    pushHelper(s,1,1);
    cout << " 1,1 pushed" << endl;
    pushHelper(s,2,2);
    cout << " 2,2 pushed" << endl;
    dumpStack(s);

}
