#pragma once
#ifndef DYNQUEUE_H
#define DYNQUEUE_H

class DynQueue
{
private:
	struct QueueNode
	{
		float value;
		QueueNode* next;
	};

	QueueNode* front;
	QueueNode* rear;
	int numItems;
public:
	DynQueue();
	~DynQueue();
	void enqueue(float);
	void dequeue();
	bool isEmpty();
	void display();
};


#endif // !DYNQUEUE_H
