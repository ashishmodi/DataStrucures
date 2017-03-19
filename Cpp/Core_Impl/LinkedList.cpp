#include "stdafx.h"
#include "LinkedList.h"


LinkedList::LinkedList()
{
	head = NULL;
	m_count = 0;
}

LinkedList::~LinkedList()
{
}

void LinkedList::testLinkedList()
{	
	cout << "How many no's you want to insert in Linked List\n";
	int nos;
	cin >> nos;	
	for (int i = 0; i < nos; i++)
	{
		int no;
		cout << "Enter number\n";
		cin >> no;
		cout << "What you want to do? insert 1:begin 2:middle(nth) 3:end or 4:Delete 5:exit\n";
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
		case 4:
			cout << "What is index position?";
			int n;
			cin >> n;
			deleteFromNth(n);
			printLinkedList();
		case 5:
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

//To delete nth Node, go till n - 1 th node. Set n - 1 -> next as n + 1. Also delete(free) n th node to avoid memory leak
void LinkedList::deleteFromNth(int n)
{
	Node* temp1 = head;

	if (n == 1)
	{
		head = temp1->next;
		delete temp1;
		--m_count;
		return;
	}

	for (int i = 0; i < n - 2; i++)
	{
		temp1 = temp1->next;
	}
	Node* temp2 = temp1->next;
	temp1->next = temp2->next;
	delete temp2;
	--m_count;
}

void LinkedList::reverseLL_Iterative()
{
	Node *curr, *next, *prev;
	curr = head;
	prev = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
}

void LinkedList::reverseLL_Recursion(Node* p)
{
	if (p->next == NULL) {
		head = p;
		return;
	}
	reverseLL_Recursion(p->next);
	Node* q = p->next;	
	q->next = p;
	p->next = NULL;
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

void LinkedList::printLL_recursion(Node * p)
{
	if (p == NULL)
	{
		cout << endl;
		return; //terminating condition
	}
	cout << " " << p->data;
	printLL_recursion(p->next);
}

void LinkedList::printLL_Reverse_recursion(Node * p)
{
	if (p == NULL)
	{
		cout << endl;
		return;
	}
	printLL_Reverse_recursion(p->next);
	cout << " " << p->data;
}

int LinkedList::noOfElementsInLL()
{
	return m_count;
}
