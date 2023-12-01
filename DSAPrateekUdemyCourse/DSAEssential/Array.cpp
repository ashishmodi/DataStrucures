#include "Array.h"
// #include <type_traits>	// swap
// #include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;

int linearSearch(int unsortedArray[], int size, int key) {
	for (int i = 0; i < size; i++) {
		if (unsortedArray[i] == key)
			return i;
	}
	return -1;
}

int binarySearch(int sortedArray[], int size, int key) {
	int start = 0;
	int end = size - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (sortedArray[mid] == key)
			return mid;
		else if (sortedArray[mid] > key)
			end = mid - 1;
		else // if (sortedArray[mid] < key)
			start = mid + 1;
	}
	return -1;
}

void reverserArray(int array[], int size) {
	int start = 0;
	int end = size - 1;
	while (start < end) {
		swap(array[start], array[end]);
		++start;
		--end;
	}
}

void printAllPairs(int array[], int size) {
	for (int i = 0; i < size; ++i) {
		int x = array[i];
		for (int j = i + 1; j < size; ++j) {
			int y = array[j];
			cout << "[" << x << ", " << y << "]" << " ";
		}
		cout << endl;
	}
}

void sumOfAllSubArraysBruteForceOn3(int array[], int size) {
	int nMaxSum = 0;
	for (int i = 0; i < size; ++i) {
		for (int j = i; j < size; ++j) {
			int nCurrentSum = 0;
			cout << "[ ";
			for (int k = i; k <= j; ++k) {
				cout << array[k] << ", ";
				nCurrentSum += array[k];
			}
			cout << "]. Sum = " << nCurrentSum;
			if (nCurrentSum > nMaxSum)
				nMaxSum = nCurrentSum;
			cout << endl;
		}
	}
	cout << "Max sum of Sub array using Brute force approach = " << nMaxSum << endl << endl;
}

void sumOfAllSubArraysUsingPrefixSum(int array[], int size) {
	int nMaxSum = 0, nCurrentSum = 0;
	constexpr int LENGTH = 7;
	int arrPrefixSum[LENGTH] = { 0 };
	arrPrefixSum[0] = array[0];

	for (int i = 1; i < size; ++i) {
		arrPrefixSum[i] = arrPrefixSum[i - 1] + array[i];
	}
	cout << "Prefix sum array: ";
	for (size_t i = 0; i < LENGTH; i++) {
		cout << arrPrefixSum[i] << ", ";
	}
	cout << endl;

	for (int i = 0; i < size; ++i) {
		for (int j = i; j < size; ++j) {
			nCurrentSum = i > 0 ? arrPrefixSum[j] - arrPrefixSum[i - 1] : arrPrefixSum[j];
			nMaxSum = max(nMaxSum, nCurrentSum);
		}
	}
	cout << "Max sum of Sub array using Prefix sum = " << nMaxSum << endl << endl;
}

void sumOfAllSubArraysUsingKadanesAlgorithm(int array[], int size) {
	int nCurrentSum = 0, nMaxSum = INT_MIN;
	for (int i = 0; i < size; ++i) {
		nCurrentSum = nCurrentSum + array[i];
		nMaxSum = max(nMaxSum, nCurrentSum);
		if (nCurrentSum < 0)
			nCurrentSum = 0;
	}
	cout << "Max sum of Sub array using Kadane's algorithm = " << nMaxSum << endl << endl;
}

// -1, -1, 2, 3, 5
int lowerBoundUsingBruteForce(vector<int> A, int Val) {
	int nLowerBound = -1, index = -1;
	for (int i = 0; i < A.size(); ++i) {
		if (A[i] == Val) {
			nLowerBound = Val;
			break;
		}
		if (A[i] > Val) {
			if (i == 0)
				return -1;
			break;
		}
		++index;
	}
	if (nLowerBound == -1)
		return A[index];
	else
		return nLowerBound;
}

int lowerBoundUsingBinarySearch(std::vector<int> A, int Val) {
	int nStart = 0;
	int nEnd = A.size() - 1;
	int nLowerBound = -1;

	while (nStart <= nEnd) {
		int nMid = (nStart + nEnd) / 2;
		if (A[nMid] == Val)
			return Val;
		if (Val > A[nMid]) {
			nLowerBound = A[nMid];
			nStart = nMid + 1;
		}
		else
			nEnd = nMid - 1;
	}	
	return nLowerBound;
}

