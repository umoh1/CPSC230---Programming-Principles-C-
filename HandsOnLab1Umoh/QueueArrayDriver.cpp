#include "QueueArray.cpp"
#include <iostream>
using namespace std;

int main()
{
	QueueArray q(5);
	q.enqueue(0);
	q.enqueue(1.1);
	q.enqueue(2.2);
	q.enqueue(3.3);
	q.enqueue(4.4);
	q.enqueue(5.5);

	q.display();

	cout << endl << endl;;
	q.dequeue();
	q.dequeue();
	q.display();

	cout << endl << endl;
	q.enqueue(5.5);
	q.enqueue(6.6);
	q.display();

	system("pause");
	return 0;
}