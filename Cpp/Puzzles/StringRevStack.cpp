#include "stdafx.h"
#include "StringRevStack.h"
#include <stack>
#include <string>

StringRevStack::StringRevStack()
{
}


StringRevStack::~StringRevStack()
{
}

void StringRevStack::testStringReverseUsingStack()
{	
	string str;
	cout << "Enter a string to reverse\n";	
	cin >> str;
	char* c = const_cast<char*>(str.c_str());
	reverseString(c, str.length());
	cout << "\nAfter reverse " << c <<endl;
}

void StringRevStack::reverseString(char *c, int len)
{
	stack<char> S;
	for (int i = 0; i < len; i++)
	{
		S.push(c[i]);	// HELLO\n
	}
	for (int i = 0; i < len; i++)
	{
		c[i] = S.top();
		S.pop();
	}
}
