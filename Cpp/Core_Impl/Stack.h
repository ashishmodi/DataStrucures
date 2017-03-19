#pragma once
#define MAX_SIZE 10
//Stack using Array
class Stack
{
	int arr[MAX_SIZE];
	int top;
public:
	Stack();
	~Stack();

	void testStack();

	void push(int data);
	void pop();
	int peek();

	void print();
	bool isStackFull();
	bool isStackEmpty();
};

