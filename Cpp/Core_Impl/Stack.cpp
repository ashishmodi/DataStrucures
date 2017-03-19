#include "stdafx.h"
#include "Stack.h"


Stack::Stack()
{
	top = -1;
}

Stack::~Stack()
{
}

void Stack::testStack()
{
	cout << "**********Stack using array**********\n";

}

void Stack::push(int data)
{
	if (!isStackFull()) {
		++top;
		arr[top] = data;
	}
	else
		cout << "Stack is full\n";
}

void Stack::pop()
{
	if (!isStackEmpty())
	{
		cout << "Popped element is " << arr[top];
		--top;
	}
	else
		cout << "Stack is empty\n";
}

int Stack::peek()
{
	return arr[top];
}

void Stack::print()
{
	for (int i = 0; i <= top; i++)
	{
		cout << arr[top] << " ";
	}
	cout << endl;
}

bool Stack::isStackFull()
{
	if (top == MAX_SIZE - 1)
		return true;
	return false;
}

bool Stack::isStackEmpty()
{
	if (top == -1)
		return true;
	return false;
}
