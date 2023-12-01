#pragma once
#include <vector>

int linearSearch(int unsortedArray[], int size, int key);
int binarySearch(int sortedArray[], int size, int key);
void reverserArray(int array[], int size);
void printAllPairs(int array[], int size);
void sumOfAllSubArraysBruteForceOn3(int array[], int size);
void sumOfAllSubArraysUsingPrefixSum(int array[], int size);
void sumOfAllSubArraysUsingKadanesAlgorithm(int array[], int size);
int lowerBoundUsingBruteForce(std::vector<int> A, int Val);
int lowerBoundUsingBinarySearch(std::vector<int> A, int Val);