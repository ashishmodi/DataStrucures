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
    for (size_t i = 0; i < size; ++i) {
        cout << nArrSorted[i] << ", ";
    }
    cout << endl << endl;
    reverserArray(nArrSorted, size);

    cout << "Printing all the pairs: " << endl;
    printAllPairs(nArrSorted, size);

    sumOfAllSubArraysBruteForceOn3(nArrSorted, size);    
    sumOfAllSubArraysUsingPrefixSum(nArrSorted, size);
    sumOfAllSubArraysUsingKadanesAlgorithm(nArrSorted, size);

    vector<int> vNos1 = { -1, -1, 2, 3, 5 };
    int nLowerBound = lowerBoundUsingBruteForce(vNos1, 0);
    cout << "Lower bound of a number using Brute force is: " << nLowerBound << endl;

    nLowerBound = lowerBoundUsingBinarySearch(vNos1, 4);
    cout << "Lower bound of a number using Binary search is: " << nLowerBound << endl << endl;

    vector<int> vNos2{ 10, 22, 28, 29, 30, 40 };
    pair<int, int> closestSumSortedPair = closestSum(vNos2, 54);
    cout << "Closest pair near to target is: (" << closestSumSortedPair.first << ", " << closestSumSortedPair.second << ")" << endl << endl;

    cout << "Array before rotation is: ";
    for (int i = 0; i < vNos2.size(); ++i) {
        cout << vNos2[i] << ", ";
    }
    cout << endl;
    rotateKTimesExtraSpace(vNos2, 3);
    rotateKTimesInplace(vNos2, 3);

    return 0;
}