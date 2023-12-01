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
        cout << "Element " << nKey << " is not present in nArrUnsorted array" << endl << endl;
    else
        cout << "Element " << nKey << " is present in nArrUnsorted array at index " << index << endl << endl;

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
        cout << "Element " << nKey << " is not present in nArrSorted array" << endl << endl;
    else
        cout << "Element " << nKey << " is present in nArrSorted array at index " << index << endl << endl;

    cout << "Sorted array after reverse: ";
    reverserArray(nArrSorted, size);
    for (size_t i = 0; i < size; i++) {
        cout << nArrSorted[i] << ", ";
    }
    cout << endl << endl;
    reverserArray(nArrSorted, size);

    cout << "Printing all the pairs: " << endl;
    printAllPairs(nArrSorted, size);

    sumOfAllSubArraysBruteForceOn3(nArrSorted, size);    
    sumOfAllSubArraysUsingPrefixSum(nArrSorted, size);
    sumOfAllSubArraysUsingKadanesAlgorithm(nArrSorted, size);

    vector<int> vNos = { -1, -1, 2, 3, 5 };
    int nLowerBound = lowerBoundUsingBruteForce(vNos, 0);
    cout << "Lower bound of a number using Brute force is: " << nLowerBound << endl;

    nLowerBound = lowerBoundUsingBinarySearch(vNos, 4);
    cout << "Lower bound of a number using Binary search is: " << nLowerBound << endl;

    return 0;
}