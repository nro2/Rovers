#include <iostream>
#include "queue.h"

using namespace std;

void dumpQueue(Queue &q)
{
    cout << "Dumping the queue" << endl;
    while (!q.isEmpty())
    {
	int result = q.peekFront();
	q.deQueue();
	cout << "Value: " << result << endl;
    }
}

int main()
{
    Queue q(5);

    q.enQueue(1);
    dumpQueue(q);

    q.enQueue(1);
    q.enQueue(2);
//    q.printInternals();
    dumpQueue(q);

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
//    q.printInternals();
    dumpQueue(q);

}
