#pragma once
#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H
using namespace std;

class QueueArray
{
	private:
		float* queueArray;	//points to queue
		int queueSize;		//holds the queue size
		int front;			//index of the front
		int rear;			//index of the rear
		int numItems;		//# of items in the queue

	public:
		QueueArray(int);
		~QueueArray();
		void enqueue(float);
		void dequeue();
		bool isEmpty() const;
		bool isFull() const;
		void clear();
		void display();

};


#endif // !""
