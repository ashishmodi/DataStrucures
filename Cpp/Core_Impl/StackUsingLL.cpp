#include "stdafx.h"
#include "StackUsingLL.h"


StackUsingLL::StackUsingLL()
{
	top = NULL;
}


StackUsingLL::~StackUsingLL()
{
}

void StackUsingLL::testStackUsingLL()
{
}

Node* StackUsingLL::createNode(int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void StackUsingLL::push(int data)
{
	Node* temp = createNode(data);	
	temp->next = top;
	top = temp;
}

void StackUsingLL::pop()
{
	if (top == NULL)
		return;	//Stack is Empty
	Node* temp = top;
	top = top->next;
	delete temp;
}

int StackUsingLL::peek()
{
	if (top != NULL)
		return top->data;
}

void StackUsingLL::print()
{
	if (top == NULL) {
		cout << "Nothing to print. Stack is empty\n";
		return;
	}
	cout << "Printing stack\n";
	Node* temp = top;
	while (temp != NULL)
	{
		cout << temp->data << " ";
	}
	cout << endl;
}
