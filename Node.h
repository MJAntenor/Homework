//*****************************************************************************************************
//
//		File:					Node.h
//
//		Student:				MJ Antenor
//
//		Assignment:				Program #6
//
//		Course Name:			Data Structures I
//
//		Course Number:			COSC 3050-01
//
//		Due:					October 9, 2023
//
//
//		This program contains the definition and functions for the Node class
//	
//		Other files required: 
//			1.	LList.h         - Contains defintion and function for LList class
//          2.	LDriver.cpp     - Provides examples/correctness of LList class
//			
//*****************************************************************************************************

#ifndef NODE_H
#define NODE_H

//*****************************************************************************************************

#include <iostream>

//*****************************************************************************************************

template<typename TYPE>
struct Node
{
    TYPE data;
    Node<TYPE>* next;

    Node();
    Node(const TYPE &d, Node<TYPE>* n = nullptr);
};

//*****************************************************************************************************

template<typename TYPE>
Node<TYPE>::Node()
{
    data = 0;
    next = nullptr;
}

//*****************************************************************************************************

template<typename TYPE>
Node<TYPE>::Node(const TYPE &d, Node<TYPE>* n)
{
    data = d;
    next = n;
}

//*****************************************************************************************************

#endif