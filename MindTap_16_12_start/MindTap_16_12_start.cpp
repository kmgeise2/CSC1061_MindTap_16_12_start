// MindTap_16_12_start.cpp : Starting solution for MindTap 16.12
// Testing the doublyLinkedList.h
// Instructions
// Write a program to test various operations of the class doublyLinkedList.
// Your program should accept a list of integers from a user 
// and use the doubleLinkedList class to output the following :
//
// 1. The list in ascending order
//
#include <iostream>
#include "doublyLinkedList.h"

using namespace std;

int main() {
    // Write your main here
    // doublyLinkedList(const doublyLinkedList<Type>& otherList); 
      //copy constructor
    doublyLinkedList<int> intList, temp;
    int num;

    cout << "Enter a list of positive integers ending with -999: " << endl;
    cin >> num;

    while (num != -999)
    {
        intList.insert(num);
        cin >> num;
    }

    cout << endl;
    cout << "List in ascending order: ";
    intList.print();
    cout << endl;

    return 0;
}