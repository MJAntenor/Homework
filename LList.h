//*****************************************************************************************************
//
//		File:					LList.h
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
//		This program contains the definition and functions for the LList class
//	
//		Other files required: 
//			1.	Node.h          - Contains defintion and function for Node class
//          2.	LDriver.cpp     - Provides examples/correctness of LList class
//			
//*****************************************************************************************************

#ifndef LIST_H
#define LIST_H

//*****************************************************************************************************

#include <iostream>
using namespace std;

//*****************************************************************************************************

#include "Node.h"
#include <new>

//*****************************************************************************************************

template<typename TYPE>
class LList
{
    private:
            Node<TYPE>* front;
    public:
            LList();
            ~LList();
            bool insert(const TYPE &dataIn);
            bool remove(TYPE &dataIO);
            bool retrieve(TYPE &dataIO) const;
            bool viewFront(TYPE &dataOut) const;
            bool viewRear(TYPE &dataOut) const;
            void display() const;
            int getNumValues() const;
            bool isEmpty() const;
            bool isFull() const;
};

//*****************************************************************************************************

template <typename TYPE>
LList<TYPE>::LList()
{
    front = nullptr;
}

//*****************************************************************************************************

template<typename TYPE>
LList<TYPE>::~LList()
{
    Node<TYPE>* pTemp;

    while((front) && (front -> next))
    {
        pTemp = front;
        front = front -> next;
        delete pTemp;
    }
}

//*****************************************************************************************************

template<typename TYPE>
bool LList<TYPE>::insert(const TYPE &dataIn)
{
    bool success = false;
    Node<TYPE>* pBefore = nullptr;
    Node<TYPE>* pAfter = front;
    Node<TYPE>* pNew;

    while((pAfter) && (pAfter -> data))
    {
        pBefore = pAfter;
        pAfter = pAfter -> next;
    }

    pNew = new(nothrow) Node<TYPE> (dataIn, pAfter);

    if(pNew)
    {
        if(pBefore)
        {
            pBefore -> next = pNew;
        }
        else
        {
            front = pNew;
        }
        success = true;
    }

    return success;
}

//*****************************************************************************************************

template<typename TYPE>
bool LList<TYPE>::remove(TYPE &dataIO)
{
    bool success = false;
    Node<TYPE>* pTemp = front;
    Node<TYPE>* pBefore = nullptr;

    while((pTemp) && (pTemp -> data < dataIO))
    {
        pBefore = pTemp;
        pTemp = pTemp -> next;
    }

    if((pTemp) && (pTemp -> data == dataIO))
    {
        dataIO = pTemp -> data;
        if(pBefore)
        {
            pBefore -> next = pTemp -> next;
        }
        else
        {
            front = pTemp -> next;
        }

        success = true;
        delete pTemp;
    }

    return success;
}

//*****************************************************************************************************

template<typename TYPE>
bool LList<TYPE>::retrieve(TYPE &dataOut) const
{
    bool success = false;
    Node<TYPE>* pTemp = front;

    while((pTemp) && (pTemp -> data < dataOut))
    {
        pTemp = pTemp -> next;
    }

    if((pTemp) && (pTemp -> data == dataOut))
    {
        dataOut = pTemp -> data;
        success = true;
    }

    return success;
}

//*****************************************************************************************************

template<typename TYPE>
bool LList<TYPE>::viewFront(TYPE &dataOut) const
{
    bool success = false;

    if(front)
    {
        dataOut = front -> data;
        success = true;
    }

    return success;
}

//*****************************************************************************************************

template<typename TYPE>
bool LList<TYPE>::viewRear(TYPE &dataOut) const
{
    bool success = false;
    Node<TYPE>* pTemp = front;

    while((pTemp) && (pTemp -> next))
    {
        pTemp = pTemp -> next;
    }

    if(pTemp)
    {
        dataOut = pTemp -> data;
        success = true;
    }

    return success;
}

//*****************************************************************************************************

template<typename TYPE>
void LList<TYPE>::display() const
{
    Node<TYPE>* pTemp = front;

    while (pTemp)
    {
        cout << pTemp -> data << "/t";

        pTemp = pTemp -> next;
    }
}

//*****************************************************************************************************

template<typename TYPE>
int LList<TYPE>::getNumValues() const
{
    int numValues = 0;
    Node<TYPE>* pCounter = front;

    while(pCounter)
    {
        numValues++;
        pCounter = pCounter -> next;
    }

    return numValues;
}

//*****************************************************************************************************

template<typename TYPE>
bool LList<TYPE>::isEmpty() const
{
    bool success = true;

    if(front)
    {
        success = false;
    }

    return success;
}

//*****************************************************************************************************

template<typename TYPE>
bool LList<TYPE>::isFull() const
{
    bool success = true;
    Node<TYPE>* pTemp;

    pTemp = new(nothrow) Node<TYPE>;

    if(pTemp)
    {
        success = false;
        delete pTemp;
    }

    return success;
}

//*****************************************************************************************************

#endif