#include "Sort.h"
#include <iostream>
#include <algorithm>
using namespace std;

// 10 15 5 25 20

void Sort::bubbleSort(std::vector<int> arr) {
	int n = arr.size();
	for (int i = 1; i < n; ++i) {
		bool bSwapped = false;
		for (int j = 0; j <= n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				bSwapped = true;
			}
		}
		if (!bSwapped)
			break;
	}
	cout << "Sort using Bubble sort: ";
	for (auto x : arr) { cout << x << ", "; }
	cout << endl;
}

void Sort::insertionSort(std::vector<int> arr) {
	int n = arr.size();
	for (int i = 1; i < n; ++i) {
		int current = arr[i];
		int prev = i - 1;
		while (prev >= 0 && arr[prev] > current) {
			arr[prev + 1] = arr[prev];
			--prev;
		}
		arr[prev + 1] = current;
	}
	cout << "Sort using Insertion sort: ";
	for (auto x : arr) { cout << x << ", "; }
	cout << endl;
}

void Sort::selectionSort(std::vector<int> arr) {
	int n = arr.size();
	for (int i = 0; i <= n - 2; ++i) {
		int nCurrent = arr[i];
		int nMinPos = i;
		for (int j = i; j < n; ++j) {
			if (arr[j] < arr[nMinPos])
				nMinPos = j;
		}
		swap(arr[nMinPos], arr[i]);
	}
	cout << "Sort using Selection sort: ";
	for (auto x : arr) { cout << x << ", "; }
	cout << endl;
}
