#include "Array.h"

int linearSearch(int unsortedArray[], int n, int key)
{
	for (size_t i = 0; i < n; i++) {
		if (unsortedArray[i] == key)
			return i;
	}
	return -1;
}

int binarySearch(int sortedArray[], int n, int key)
{
	int start = 0;
	int end = n - 1;
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
