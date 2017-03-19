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

	//Delete APIs
	void deleteFromNth(int pos);

	//Reverse APIs
	void reverseLL_Iterative();
	void reverseLL_Recursion(Node* p);
	
	//Print APIs
	void printLinkedList();
	void printLL_recursion(Node* head); //Initially we pass address of head node
	void printLL_Reverse_recursion(Node* head);

	//Helper APIs	
	int noOfElementsInLL();
};

