#pragma once
#ifndef DYNSTACK_H
#define DYNSTACK_H
using namespace std;

class DynStack
{
private:
	struct StackNode
	{
		float value;
		StackNode* next;
	};

	StackNode* top;

public:
	DynStack();
	void push(float);
	void pop();
	bool isEmpty();
	void display();
};


#endif // !
