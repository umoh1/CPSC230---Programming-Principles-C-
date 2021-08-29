#include <iostream>
#include "DynStack.h"
using namespace std;

DynStack::DynStack()
{
	top = NULL;
	// top = new StackNode;	//set the top to a new stack node;
}

void DynStack::push(float n)
{

	StackNode* newNode = new StackNode;

	newNode->value = n;
	newNode->next = nullptr;

	//if there is no top, set top = to the first node
	if (!top)
	{
		cout << "Pushing " << n << endl;
		top = newNode;
	}
	else
	{
		cout << "Pushing " << n << endl;

		newNode->next = top;	//set the newNode = to the current top
		top = newNode;		//set top = to the new node

	}
}

void DynStack::pop()
{
	StackNode* nodePtr = top;
	StackNode* nextPtr = nullptr;
	if (!top)
	{
		cout << "Stack is empty." << endl;
	}
	else
	{
		cout << "Popping " << nodePtr->value << endl;
		//set top next to the second node
		nodePtr = nodePtr->next;

		//set top = to the second node
		top= nodePtr;

	}
	
}

bool DynStack::isEmpty()
{
	if (!top)
	{
		return true;
	}

	return false;
}

void DynStack::display()
{
	StackNode* nodePtr = top;

	while (nodePtr!=nullptr)
	{
		cout << nodePtr->value << "\t";
		nodePtr = nodePtr->next;
	}
}

DynStack::DynStack()
{
	StackNode* nodePtr;
	StackNode* nextNode;

	nodePtr = top;

	while (nodePtr != NULL)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}