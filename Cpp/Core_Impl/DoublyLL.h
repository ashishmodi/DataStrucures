#pragma once

struct Node {
	int data;
	Node* prev;
	Node* next;
};

class DoublyLL
{
	Node* head;
	int m_count;
public:
	DoublyLL();
	~DoublyLL();	

	void testDoublyLL();
	Node* createNode(int data);

	//Insert API
	void insertAtBegining(int no);
	void insertAtNth(int no, int pos);
	void insertAtEnd(int no);


};

