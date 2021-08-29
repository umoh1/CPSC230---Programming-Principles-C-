#include "QueueArray.h"
#include <iostream>
using namespace std;

QueueArray::QueueArray(int n)
{
	queueArray = new float[n];		//allocate static memory for array
	queueSize = n;					//set size of queue to n

}

QueueArray::~QueueArray()
{
	delete[] queueArray;
}

void QueueArray::enqueue(float n)
{
	//if there are no nodes, set front to the first element
	if (numItems == 0)
	{
		front = 0;
		rear = 0;
	}
	else
	{
		if(numItems>=queueSize)
		{
			cout << "The queue is full." << endl;
			return;
		}
		rear = numItems;
	}

	queueArray[numItems] = n;		//store n
	numItems++;		//increase number of items
}

void QueueArray::dequeue()
{
	if (numItems == 0)
	{
		cout << "Queue is empty." << endl;
	}
	else
	{
		cout << queueArray[front]<<" is removed from the queue." << endl;
		//move all items up
		if (numItems == 1)
		{
			queueArray[0] = NULL;
		}
		else
		{
			for (int i = 0; i < numItems-1; i++)
			{
				
				queueArray[i] = queueArray[i + 1];
			}
		}

		//move down rear by 1
		rear--;
		numItems--;
	}
}


bool QueueArray::isEmpty() const
{
	if (numItems == 0)
		return true;

	return false;
}


bool QueueArray::isFull() const
{
	if (numItems == queueSize)
		return true;

	return false;
}


void QueueArray::clear()
{
	delete[] queueArray;
}


void QueueArray::display()
{
	cout << "There are "<<numItems<< " items in the queue were (front to rear): "<< endl;
	for (int i = 0; i < numItems; i++)
	{
		cout << queueArray[i]<<endl;
	}
}