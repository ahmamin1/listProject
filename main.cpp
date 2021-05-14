
#include <iostream>
#include "mylist.h"

//a driver program to test MyList
int main() {

	MyList list1;

	list1.AddToHead(4);

	list1.print();  //you should get just 4

	list1.AddToHead(6);
	list1.AddToEnd(18);

	//you should have 6, 4, 18
	list1.print();

	//you should get 1 printed (1 means true)
	std::cout << list1.Search(18);

	//you should get 0 printed (0 means false)
	std::cout << list1.Search(2);

	list1.Remove(6);

	//you should get 4, 8
	list1.print();

	return 0;

};
