#include "stdafx.h"
#include "ReverseSentence.h"

//using namespace std;


ReverseSentence::ReverseSentence()
{
	sentence = "INDIA  IS MY  COUNTRY";
}

ReverseSentence::~ReverseSentence()
{
}

void ReverseSentence::processReverse()
{
	cout << "Before processing Sentence is " << sentence << endl;
	
	int first = 0, last = 0;

	//INDIA IS  MY   COUNTRY	
	for (int i = 0; i < sentence.length() ; ++i)
	{
		if (charAt(i) == ' ')
		{
			last = i - 1;
			swapWord(first, last);
			first = i + 1;
		}

		if (i == sentence.length() - 1)
		{
			for (int j = i; j >= 0; --j)
			{
				if (charAt(j) == ' ')
				{
					first = j + 1;
					last = i;
					swapWord(first, last);
					break;
				}
			}
		}
	}

	cout << "After  reversing words " << sentence << endl;

	//AIDNI SI YM YRTNUOC
	for (int i = 0; i < sentence.length(); ++i)
	{
		int first = 0, last = sentence.length() - 1;
		while (first < last)
		{
			char temp = sentence[first];
			sentence[first] = sentence[last];
			sentence[last] = temp;
			++first;
			--last;
		}
	}

	cout << "After  processing Sentence is " << sentence << endl;
}

void ReverseSentence::swapWord(int first, int last)
{
	char firstChar, lastChar;
	while (first < last)
	{
		firstChar = charAt(first);
		lastChar = charAt(last);
		sentence[last] = firstChar;
		sentence[first] = lastChar;
		++first;
		--last;
	}
}

char ReverseSentence::charAt(int index)
{
	return sentence[index];
}

