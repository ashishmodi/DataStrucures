#pragma once
class BalanceParanthesis
{
	
public:
	BalanceParanthesis();
	~BalanceParanthesis();
	bool IsOpeningParanthesis(char c);
	bool IsClosingParanthesis(char c);
	void TestBalanceParanthesis();
	bool IsBalancedParanthesis(const string str);
	char GetOpeningBrace(char cClosingBrace);
};

