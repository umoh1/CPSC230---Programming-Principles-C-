#include "DynQueue.h"
#include <iostream>
using namespace std;

DynQueue::DynQueue()
{
	front = nullptr;
	rear = nullptr;
	numItems = 0;
}

DynQueue::~DynQueue()
{
	QueueNode* newFront = nullptr;
	QueueNode* nodePtr = front;

	while (nodePtr->next)
	{
		newFront = front->next;

		//delete the front
		delete front;

		//set second node to front
		front = newFront;
		nodePtr = nodePtr->next;
	}
}

void DynQueue::enqueue(float n)
{
	QueueNode* nodePtr = nullptr;
	QueueNode* newNode = new QueueNode;

	newNode->value = n;
	newNode->next = nullptr;

	//If there are no nodes, set the front and rear = to the new node
	if (!front)
	{
		front = newNode;
		rear = newNode;
	}
	else
	{

		if (numItems == 1)
		{
			front->next = newNode;
			rear = newNode;
			numItems++;
			return;
		} 
		else
		{
			//set nodePtr to front 
			nodePtr = front;

			while (nodePtr->next)
			{
				nodePtr = nodePtr->next;
			}

			//append new node and set rear
			nodePtr->next = newNode;
			rear = newNode;
		}
		
	}

	numItems++;
}

void DynQueue::dequeue()
{
	QueueNode* nodePtr = front;
	QueueNode* newFront = nullptr;

	if (numItems == 0)
	{
		cout << "Queue is empty." << endl;
		return;
	}

	cout << nodePtr->value << " is removed." << endl;

	//set second node to new front
	newFront = front->next;

	//delete the front
	//delete front;

	//set second node to front
	front = newFront;

	numItems--;
}

bool DynQueue::isEmpty()
{
	if (numItems == 0)
	{
		return true;
	}

	return false;
}

void DynQueue::display()
{
	QueueNode* nodePtr = front;

	cout << "There are " <<numItems <<" in the queue (front to rear)."<< endl;
	while (nodePtr->next)
	{
		cout << nodePtr->value << endl;
		nodePtr = nodePtr->next;
	}
	cout << nodePtr->value << endl;
}