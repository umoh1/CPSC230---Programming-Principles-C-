#include "ItemList.h"
#include <iostream>
using namespace std;

ItemList::ItemList()
{
	head = NULL;
}

bool ItemList::IsThere(int item) const
{
	//run through all nodes, return true if item is in list
	ListNode *nodePtr;	//set pointer to run through the list
	nodePtr = head;

	//start at top of the list, check if there is another node by checking next
	if (!head)
	{
		// cout << "Hey. " << head->value << endl << endl;
		cout << item << " is not in the list." << endl;
		return false;
	}

	while (nodePtr->next)
	{
		if (nodePtr->value == item)
		{
			cout << item << " is in the list." << endl;
			return true;
		}

		//go to next node
		nodePtr = nodePtr->next; 
	}
	cout << item << " is not in the list." << endl;
	return false;
}

void ItemList::Insert(int item)
{
	ListNode* newNode;//points to new node
	ListNode *nodePtr; //to move thru list

	ListNode* previous;	//points to previous

	//enter item in newNode value
	newNode = new ListNode;

	//set node value
	newNode->value = item;

	//set node pointer = to null
	newNode->next = NULL;

	//run through list, find last node

	if (!head)	//if there is no head
	{
		//set a head
		head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		//set nodeptr & previous = to beginning of list
		nodePtr = head;
		previous = nullptr;

		//traverse the list, while next is not a nullptr & nodePtr value is less than item
		while (nodePtr->next&&nodePtr->value<item)
		{
			//move the previous pointer up to trail
			previous = nodePtr;

			//set nodePtr to next, going to next node
			nodePtr = nodePtr->next;
		}

		//if previous is the head
		if (previous==nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			previous->next = newNode;
			newNode->next = nodePtr;
		}
			
			
	}

}

void ItemList::Delete(int item)
{
	//run through list, find item
	ListNode* nodePtr;
	ListNode* previousNode = nullptr;

	

	//if the node right after the head is the one to delete
	if (!head)
	{
		//goes from head to first node
		cout << "Nothing in list." << endl;
		return;
	}

	//if the first node is the one to be deleted
	if (head->value == item)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;

		while (nodePtr != NULL && nodePtr ->value !=item)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;			
		}

		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
		
	}
	//shift nodes

}

void ItemList::Print() const
{
	ListNode* nodePtr;

	//start at head of list
	nodePtr = head;

	//run through list, print items
	while (nodePtr->next)
	{
		cout << nodePtr->value << endl;

		//set nodePtr to next, going to next node
		nodePtr = nodePtr->next;
	}
}

int ItemList::GetLength() const
{
	int length1 =0;
	if (!head)
		return length1;

	ListNode* nodePtr;
	nodePtr = head;

	//run through list
	while (nodePtr ->next)
	{
		length1++;
		nodePtr = nodePtr->next;
	}

	return length1;
}

//destructor
ItemList::~ItemList()
{
	ListNode* nodePtr;	//current node
	ListNode* nextNode;	//next node

	nodePtr = head;

	//while theres more nodes
	while (nodePtr != NULL)
	{
		//
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}