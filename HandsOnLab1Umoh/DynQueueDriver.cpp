#include "DynQueue.cpp"
#include <iostream>
using namespace std;

int main()
{
	DynQueue q;
	q.enqueue(0);
	q.enqueue(1.1);
	q.enqueue(2.2);
	q.enqueue(3.3);
	q.enqueue(4.4);
	q.enqueue(5.5);

	q.display();
	cout << endl;

	q.dequeue();
	q.dequeue();

	cout << endl;
	q.display();

	q.enqueue(5.5);
	q.enqueue(6.6);
	cout << endl;
	q.display();

	system("pause");
	return 0;
}

