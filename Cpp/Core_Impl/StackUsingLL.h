#pragma once

struct Node {
	int data;
	Node* next;
};

class StackUsingLL
{
	Node* top;
public:
	StackUsingLL();
	~StackUsingLL();

	void testStackUsingLL();
	Node* createNode(int data);

	void push(int data);
	void pop();
	int peek();

	void print();
};

