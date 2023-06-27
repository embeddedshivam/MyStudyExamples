/*
 * ArrayLibrary.cpp
 *
 *  Created on: Jun 16, 2023
 *      Author: shivam
 */

#include "ArrayLibrary.h"

ArrayLibrary::ArrayLibrary() {
	// TODO Auto-generated constructor stub

}

ArrayLibrary::~ArrayLibrary() {
	// TODO Auto-generated destructor stub
}

//void ArrayExample(){
//	// Below is an array can contain 5 int type data
//	array<int, 5> test_array={11, 22, 33, 44, 55};
//
//	// (at(i)) member function
//	cout << test_array.at(3)<<endl;
//	cout << test_array[2]<<endl;
//
//	// (front()/back()) member function
//	cout << test_array.front()<<endl; // get the value at 0th index
//	cout << test_array.back()<<endl;  // get the value at last index
//
//	// (fill()) member function
//	test_array.fill(2);
//	for (int i=0;i<5;i++){
//		cout << test_array.at(i)<<endl;
//	}
//
//	// (swap()) member function
//	array<int, 5> test_array1={1, 2, 3, 4, 5};
//	test_array.swap(test_array1);
//	for (int i=0;i<5;i++){
//		cout << test_array.at(i)<<endl;
//	}
//
//	// (fill()) member function
//	cout<<test_array.size()<<endl;
//
//}
//
//void PairExample(){
//	// Below is an array can contain 5 int type data
//	//pair<int, 5> test_array={11, 22, 33, 44, 55};
//
//
//}
//
//
///*
//
//Online C compiler to run C program online
//#include <stdio.h>
//#define REV(x) ( ((x&0xff000000)>>24) | (((x&0x00ff0000)<<8)>>16) | (((x&0x0000ff00)>>8)<<16) | ((x&0x000000ff) << 24) )
//int main() {
//    // Write C code here
//    int i = 0x1234abcd;
///*
//        1       2       3       4       a       b       c       d
//        0001    0010    0011    0100    1010    1011    1100    1101
//        1111    1111    0000    0000    0000    0000    0000    0000
//        Bitwise and (&) using ff0000000 will give the bits as it is where f is used
//
//        >> Bitwise Right Shift
//        << Bitwise Left Shift
//
//        Bitwise or (|) operation will add the bits as it is (1100 | 0011 will be 1111)
//
//        Bitwise not (~) negation operator will compliment the data
//
//        Bitwise xor operator (^) : if (1^0)/(0^1) == 1 else 0
//
//    printf("%d: ", (01^11));
//    //printf("%x %x %x %x :", ((i&0xff000000)>>24),  (((i&0x00ff0000)>>8)), (((i&0x0000ff00)<<8)), ((i&0x000000ff) << 24) );
//
//    return 0;
//}
// */
///*
// * int arr[5] = {0, 1, 2, 3, 4};
//	cout << "Arrays in CPP: " << *(arr + 1) << endl; // prints !!!Hello World!!!
//	*(arr + 1) = 10; // Changing value @ index 1
//	cout << "Arrays in CPP: " << *(arr + 1) << endl; // prints !!!Hello World!!!
//	cout << sizeof(arr) << sizeof(int) << endl;
//
//	/*
//	 * Size of Array
//	 * 	sizeof() // It returns the size in bytes and not the size of array
//	 * 	sizeof(arr) = 20
//	 *  sizeof(int) = 4
//	 *
//	// Way to loop array
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
//	  cout << arr[i] << "\n";
//	}
//	// Another Way to loop
//	for (int i : arr) {
//	  cout << i << "\n";
//	}
//
//
//	// Multidimentional Array
//	string letters[2][4] = {
//	  { "A", "B", "C", "D" },
//	  { "E", "F", "G", "H" }
//	};
//
//	for (int i = 0; i < 2; i++) {
//	  for (int j = 0; j < 4; j++) {
//	    cout << letters[i][j] << "\n";
//	  }
//	}
//	// It doesn't work in this case
//	//	for (char i : letters) {
//	//		  cout << i << "\n";
//	//	}
//
//	// Subsequence in array
//
//	// Vector are dynamic arrays has ability to resize itself.
//	vector<int> sequence = {1, 2, 3};
//
//	// It is similar to dictionary in python
//	unordered_map<string, int> s ;
//	//auto y = begin(sequence);
//	cout << *(end(sequence)) << endl;
// *
// *
// */
