#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    int nArrUnsorted[7] = { 10, 30, 20, 50, 40, 70, 60 };
    int size = sizeof(nArrUnsorted) / sizeof(int);
    cout << "Unsorted array: ";
    for (size_t i = 0; i < size; i++) {
        cout << nArrUnsorted[i] << ", ";
    }
    cout << endl;
    int nKey;
    cout << "Linear Search ==> Enter an element to find in an array: ";
    cin >> nKey;
    int index = linearSearch(nArrUnsorted, size, nKey);
    if (index == -1)
        cout << "Element " << nKey << " is not present in nArrUnsorted array" << endl;
    else
        cout << "Element " << nKey << " is present in nArrUnsorted array at index " << index << endl;

    int nArrSorted[7] = { 10, 20, 30, 40, 50, 60, 70 };
    size = sizeof(nArrUnsorted) / sizeof(int);
    cout << "Sorted array: ";
    for (size_t i = 0; i < size; i++) {
        cout << nArrSorted[i] << ", ";
    }
    cout << endl;
    cout << "Binary Search ==> Enter an element to find in an array: ";
    cin >> nKey;
    index = binarySearch(nArrSorted, size, nKey);
    if (index == -1)
        cout << "Element " << nKey << " is not present in nArrSorted array" << endl;
    else
        cout << "Element " << nKey << " is present in nArrSorted array at index " << index << endl;

    return 0;
}