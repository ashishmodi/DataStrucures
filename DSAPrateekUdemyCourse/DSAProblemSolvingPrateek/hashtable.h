#pragma once
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Node
{
public:
	string m_sKey;
	T m_value;
	Node* next;
	Node(string key, T val)
	{
		m_sKey = key;
		m_value = val;
		next = NULL;
	}
	~Node()
	{
		if (next != NULL) {
			delete next;
		}
	}
};

template <typename T>
class Hashtable
{
public:
	Node<T>** table;
	int m_nTableSize;
	int m_nNoOfEntries;

	int hashFunction(string key) {
		int idx = 0;
		int power = 1;
		for (auto ch : key) {
			idx = (idx + ch * power) % ts;
			power = (power * 29) % ts;
		}
		return idx;
	}

	void rehash() {
		Node<T>** oldTable = table;
		int oldTableSize = m_nTableSize;
	}
};