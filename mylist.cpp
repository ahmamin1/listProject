#include "mylist.h"
#include <iostream>
using namespace std;

MyList::MyList() :
        head(nullptr),
        last(nullptr) {

}

bool MyList::AddToHead(const int& value) {

    node* newNode;
    newNode = new node;
    newNode->value = value;
    newNode->next = head;
    head = newNode;

    return true;
}

bool MyList::AddToEnd(const int& value) {

    node* newNode = new node;
    newNode->value = value;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return true;
    }
    node* p = head;
    while( p->next != nullptr ) // look for the last item
        p = p->next;

    p->next = newNode;


    return true;
}

bool MyList::Search(const int& value) {
    cout << endl;
    node* current = head;
    while (current != nullptr) {
        if (current->value == value) {

            return true;
        }

        current = current->next;
    }
    return false;
}

bool MyList::Remove(const int& value) {

    node* current = head;
    node* pre = head;

    if (value == current->value) {
        head = current->next;
    }
    while (value != current->value) {
        pre = current;
        current = current->next;
    }
    pre->next = current->next;
    delete current;

    return true;
}

void MyList::print() {
    if (head == nullptr) {
        cout << "NULL" << endl;
    }
    else {
        node* p = head;
        while (p != nullptr) {
            cout << p->value << " ";
            p = p->next;
        }
    }
    cout << endl;
}
