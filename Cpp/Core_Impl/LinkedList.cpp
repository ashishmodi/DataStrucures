#include "stdafx.h"
#include "LinkedList.h"


LinkedList::LinkedList() : m_count(0)
{
}

LinkedList::~LinkedList()
{
}

void LinkedList::testLinkedList()
{
	head = NULL;
	cout << "How many no's you want to insert in Linked List\n";
	int nos;
	cin >> nos;	
	for (int i = 0; i < nos; i++)
	{
		int no;
		cout << "Enter number\n";
		cin >> no;
		cout << "Where you want to insert 1:begin 2:middle(nth) 3:end\n";
		int position;
		cin >> position;
		switch (position)
		{
		case 1:
			insertAtBegining(no);
			printLinkedList();
			break;
		case 2:
			cout << "What is index position?";
			int index;
			cin >> index;
			insertAtNth(no, index);
			printLinkedList();
			break;
		case 3:
			insertAtEnd(no);
			printLinkedList();
			break;
		default:
			break;
		}				
	}	
}

Node* LinkedList::createNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;
	return temp;
}

void LinkedList::insertAtBegining(int no)
{
	Node* temp = createNode(no);
	if (head != NULL)	//If LL already has some elements
		temp->next = head;
	head = temp;
	++m_count;
}

void LinkedList::insertAtNth(int no, int n)
{
	if (n == 1) {
		insertAtBegining(no);
		return;
	}

	if (n > m_count)
	{
		insertAtEnd(no);
		return;
	}

	Node* temp1 = createNode(no);	
	Node* temp2 = head;

	for (int i = 0; i < n - 2; i++)
	{
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
	++m_count;
}

void LinkedList::insertAtEnd(int no)
{
	Node* temp1 = createNode(no);
	Node* temp2 = head;

	while (temp2->next != NULL)
	{
		temp2 = temp2->next;
	}
	temp2->next = temp1;
	++m_count;
}

void LinkedList::printLinkedList()
{
	Node* temp = head;
	cout << "\nLink List is :\n";
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int LinkedList::noOfElementsInLL()
{
	return m_count;
}
