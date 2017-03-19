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
