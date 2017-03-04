#pragma once

//using namespace std;
#include <string>

class ReverseSentence
{
public:
	ReverseSentence();
	~ReverseSentence();
	
	void processReverse();

	char charAt(int index);
	void swapWord(int first, int last);

private:
	string sentence;
	
};
