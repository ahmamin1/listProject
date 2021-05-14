#ifndef _MY_LIST_H_
#define _MY_LIST_H_

//A simple class that demo the implementation of lined list
//please see mylist.cpp and complete the missing code there
//Author Mostafa Herajy

//this is a simple list node that stores only integer values
struct node {

    node* next;

    int value;
};

class MyList {

public:

    //list constructor
    MyList();

    //add a value to the head of the list
    //@input: value -- a value to add to the list
    //return true if addition is successful and false otherwise
    bool AddToHead(const int& value);

    //add a value to the end of the list
    //@input: value -- a value to add to the list
    //return true if addition is successful and false otherwise
    bool AddToEnd(const int& value);

    //search for a value in the linked list
    //true is this value is found in the list and false if not found
    //@input: value -- a value to search for
    bool Search(const int& value);

    //remove a value from the list
    //true if remove is successful and false if not
    //@input: value -- a value to remove
    bool Remove(const int& value);

    //print all the values in the list
    void print();

private:

    //pointer to the head of the list
    node* head;

    //pointer to the last node in the list
    node* last;

};


#endif //_MY_LIST_H_
#pragma once
