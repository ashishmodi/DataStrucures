#include "stdafx.h"
#include "DoublyLL.h"

DoublyLL::DoublyLL()
{
	head = NULL;
	m_count = 0;
}

DoublyLL::~DoublyLL()
{
}

void DoublyLL::testDoublyLL()
{
	insertAtBegining(5);
	insertAtBegining(10);
	insertAtEnd(15);
	insertAtNth(20, 2);
	insertAtNth(25, 3);
	insertAtNth(30, 6);
	insertAtNth(35, 4);
	printDoublyLL();
	deleteFromNth(1);
	deleteFromNth(4);
	deleteFromNth(2);
	printDoublyLL();
	ReverseDoublyLL_Iterative();
	printDoublyLL();
}

Node* DoublyLL::createNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->next = NULL;
	temp->prev = NULL;
	return temp;
}

void DoublyLL::insertAtBegining(int no)
{
	Node* temp = createNode(no);
	if (head == NULL)
	{
		head = temp;
		return;
	}
	head->prev = temp;
	temp->next = head;
	head = temp;
}

void DoublyLL::insertAtNth(int no, int pos)
{
	Node* newNode = createNode(no);
	Node* temp = head;

	if (temp == NULL || pos == 1)
	{
		insertAtBegining(no);
		return;
	}
	
	for (int i = 0; i < pos-2; i++)
	{
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		insertAtEnd(no);
		return;
	}
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;
	newNode->prev = temp;
}

void DoublyLL::insertAtEnd(int no)
{
	Node* temp = head;
	while (temp->next != NULL)
		temp = temp->next;
	Node* newNode = createNode(no);
	temp->next = newNode;
	newNode->prev = temp;
}

void DoublyLL::deleteFromNth(int pos)
{
	Node* temp = head;
	if (pos == 1)
	{
		head = temp->next;
		head->prev = NULL;
		delete temp;
		return;
	}
	for (int i = 0; i < pos - 2 ; i++)
	{
		temp = temp->next;
	}
	Node* temp2 = temp->next;
	temp->next = temp2->next;
	temp2->next->prev = temp;
	delete temp2;
}

void DoublyLL::ReverseDoublyLL_Iterative()
{
	Node* curr = head;
	if (curr == NULL || curr->next == NULL)
		return;		// No Node or only 1 Node
	while (curr->next != NULL)
		curr = curr->next;
	
	head = curr;	
	Node* temp;

	while (curr != NULL)
	{
		temp = curr->next;
		curr->next = curr->prev;
		curr->prev = temp;
		curr = curr->next;
	}
	head->prev = NULL;
}

void DoublyLL::printDoublyLL()
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

