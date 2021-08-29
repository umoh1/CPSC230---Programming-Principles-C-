#include "Stack.cpp"
#include <iostream>
using namespace std;


int main()
{
	Stack myStack(10);
	myStack.push(5.0);
	myStack.push(15.2);
	myStack.push(20.3);
	myStack.push(25.4);
	myStack.push(30.4);

	cout << "\n Inside the stack: (from top to bottom)" << endl;
	myStack.display();
	cout << endl << endl;

	myStack.pop();
	myStack.pop();
	myStack.pop();
	myStack.pop();
	myStack.pop();
	myStack.pop();



	system("pause");
	return 0;
}