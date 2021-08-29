#pragma once
#ifndef STACK_H
#define STACK_H

class Stack
{
private:
	float* stackArray;
	int stackSize;
	int top;

public:
	Stack(int);
	void push(float);
	void pop();
	bool isFull();
	bool isEmpty();
	void display();
};



#endif // !STACK_H
