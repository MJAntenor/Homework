//*****************************************************************************************************
//
//		File:					LDriver.h
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
//          2.	LList.h         - Contains defintion and function for LList class
//			
//*****************************************************************************************************

#include <iostream>

//*****************************************************************************************************

#include "LList.h"

//*****************************************************************************************************

int main()
{
    LList<int> list; 
    int data = 0;

    cout << "Tests if list is empty: " << list.isEmpty() << endl;
    cout << endl;
    cout << "Tests if list is full: " << list.isFull() << endl;
    cout << endl;
    cout << "Number of Values in List: " << list.getNumValues() << endl;
    cout << endl;
    cout << "Values in List: ";
    list.display();
    cout << endl;

    cout << "Remove Test on Empty List: ";
    
    if(list.remove(data))
    {
        cout << "Works";
    }
    else
    {
        cout << "Doesn't Work";
    }

    cout << endl;
    cout << "Retrieve Test on Empty List: ";

    if(list.retrieve(data))
    {
        cout << "Works";
    }
    else
    {
        cout << "Doesn't Work";
    }

    cout << endl;
    cout << "ViewFront Test on Empty List: ";

    if(list.viewFront(data))
    {
        cout << "Works";
    }
    else
    {
        cout << "Doesn't Work";
    }

    cout << endl;
    cout << "ViewRear Test on Empty List: ";

    if(list.viewRear(data))
    {
        cout << "Works";
    }
    else
    {
        cout << "Doesn't Work";
    }

    cout << endl;
    cout << "ViewRear Test on Empty List: ";

    if(list.viewRear(data))
    {
        cout << "Works";
    }
    else
    {
        cout << "Doesn't Work";
    }

    cout << endl;
    cout << "ViewRear Test on Empty List: ";
    cout << endl;

    //list w/ nodes

    cout << "Insert at front Test: ";

    if (list.insert(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    ";
        list.display();
        cout << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Insert at back Test: ";

    data = 10;

    if (list.insert(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    ";
        list.display();
        cout << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Insert in middle Test: ";

    data = 5;

    if (list.insert(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    ";
        list.display();
        cout << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Retrieve from front Test: ";

    data = 0;

    if (list.retrieve(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    " << data << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Retrieve from front Test: ";

    data = 0;

    if (list.retrieve(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    " << data << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Retrieve from middle Test: ";

    data = 5;

    if (list.retrieve(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    " << data << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Retrieve from back Test: ";

    data = 10;

    if (list.retrieve(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    " << data << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "There are " << list.getNumValues() << endl;
    cout << endl;

    cout << "Invalid Retrieve from front Test: ";

    data = -5;

    if (list.retrieve(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    " << data << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Invalid Retrieve from middle Test: ";

    data = 3;

    if (list.retrieve(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    " << data << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Invalid Retrieve from end Test: ";

    data = 15;

    if (list.retrieve(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    " << data << endl;
    }
    else
    {
        cout << "Doesn't Work" << endl;
    }

    cout << "Invalid Remove from front Test: ";

    data = -2;

    if (list.remove(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    ";
        list.display();
        cout << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Invalid Remove from middle Test: ";

    data = 2;

    if (list.remove(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    ";
        list.display();
        cout << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Invalid Remove from back Test: ";

    data = 12;

    if (list.remove(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    ";
        list.display();
        cout << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Invalid Remove from middle Test: ";

    data = 2;

    if (list.remove(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    ";
        list.display();
        cout << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Remove from middle Test: ";

    data = 5;

    if (list.remove(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    ";
        list.display();
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Remove from front Test: ";

    data = 0;

    if (list.remove(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    ";
        list.display();
        cout << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    cout << "Remove from end Test: ";

    data = 10;

    if (list.remove(data))
    {
        cout << "Works!" << endl;
        cout << "Values:    ";
        list.display();
        cout << endl;
    }
    else
    {
        cout << "Deosn't Work" << endl;
    }

    return 0;
}