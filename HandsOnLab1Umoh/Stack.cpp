#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int n)
{
	stackSize =n;
	stackArray = new float[n];

	top = 0;
}

void Stack::push(float n)
{
	cout << "Pushing " << n << endl;
	stackArray[top] = n;		//put float into array
	top++;							//increment the top of stack
}

void Stack::pop()
{			
	if (top == 0)
	{
		cout << "Stack is empty." << endl;
		return;
	}

	top--;			//decrement stack top
	cout << "Popping " << stackArray[top] << endl;

	
	
}

bool Stack::isFull()
{
	if (top == stackSize - 1)
		return true;
		

	return false;
}

bool Stack::isEmpty()
{
	if (top == 0)
		return true;

	return false;
}

void Stack::display()
{
	for (int i = top-1; i > -1; i--)
		cout << stackArray[i] << "\t";
}