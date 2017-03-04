#pragma once

struct Node
{
	int data;
	Node* next;
};

class LinkedList
{
	Node* head;
	int m_count;

public:
	LinkedList();
	~LinkedList();	

	void testLinkedList();

	Node* createNode(int data);

	//Insert APIs
	void insertAtBegining(int no);
	void insertAtNth(int no, int pos);
	void insertAtEnd(int no);

	//Helper APIs
	void printLinkedList();
	int noOfElementsInLL();
};
