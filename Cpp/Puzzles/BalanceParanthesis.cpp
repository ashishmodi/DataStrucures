#include "stdafx.h"
#include "BalanceParanthesis.h"
#include <stack>

BalanceParanthesis::BalanceParanthesis()
{
}


BalanceParanthesis::~BalanceParanthesis()
{
}

bool BalanceParanthesis::IsOpeningParanthesis(char c)
{
	if (c == '[' || c == '{' || c == '(')
		return true;
	return false;
}

bool BalanceParanthesis::IsClosingParanthesis(char c)
{
	if (c == ']' || c == '}' || c == ')')
		return true;
	return false;
}

void BalanceParanthesis::TestBalanceParanthesis()
{
	string str;
	cout << "Enter a expression\n";
	cin >> str;
	bool bIsExprValid = IsBalancedParanthesis(str);
	if (bIsExprValid)
		cout << "Expression is valid";
	else
		cout << "Expression is invalid";
}

bool BalanceParanthesis::IsBalancedParanthesis(const string str)
{
	stack<char> S;
	char cCurrrentChar;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!IsOpeningParanthesis(str[i]) && !IsClosingParanthesis(str[i]))
			continue;
		if (IsOpeningParanthesis(str[i]))
		{
			S.push(str[i]);
			continue;
		}
		if (IsClosingParanthesis(str[i]))
		{
			cCurrrentChar = S.top();
			char cOpeningBrace = GetOpeningBrace(str[i]);
			if (cCurrrentChar == cOpeningBrace)
			{
				S.pop();
				continue;
			}
			else
				return false;
		}
	}
	
	if (S.empty())
		return true;
	return false;
}

char BalanceParanthesis::GetOpeningBrace(char cClosingBrace)
{
	if (cClosingBrace == ')')
		return '(';
	if (cClosingBrace == ']')
		return '[';
	if (cClosingBrace == '}')
		return '{';

	return ' ';
}
