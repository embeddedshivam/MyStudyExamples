//============================================================================
// Name        : TestProject.cpp
// Author      : Shivam Thakur
// Version     :
// Copyright   : Copyright to Practice only
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ArrayLibrary.h"
#include "LinkedListLibrary.h"
#include "HashTableLibrary.h"
#include "GraphsLibrary.h"
#include "QueueLibrary.h"
#include "StringsLibrary.h"
#include "StackLibrary.h"
#include "TreeLibrary.h"
#include <vector>
#include <unordered_map>
#include<array>
#include"SortingAlgorithms.c"
using namespace std;

void ArrayExample();
void PairExample();
void BubbleSort();
void SelectionSort();
void InsertionSort();
extern void RunSorting(int *, int );
int main() {
	cout << "Started the C/C++ Program by Shivam" << endl; // prints !!!Hello World!!!
	int A[] = {34, 15, 29, 8, 1, -5, 30, 12};
	cout << "Input Array: ";
	for (int i=0;i<=7;i++){
			printf("%d ", A[i]);
	}
	cout << "\n";
	RunSorting(A, INSERTION_SORT);
	for (int i=0;i<=7;i++){
		printf("%d ", A[i]);
	}
	return 0;
}



























