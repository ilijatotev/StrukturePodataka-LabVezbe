#include "LList.h"

void main()
{
	LList *list = new LList();
	list->addToHead(6);
	list->addToHead(6);
	list->addToHead(3);
	list->addToHead(3);
	list->addToHead(2);
	list->addToHead(2);
	list->addToHead(2);
	list->addToHead(4);
	list->addToHead(7);
	list->addToHead(1);
	list->addToHead(9);
	list->addToHead(1);
	list->addToHead(4);
	
	//lista pre primene funkcije
	list->printAll();

	std::cout << "\n";

	list->removeDuplicates();
	//lista nakon primene funkcije
	list->printAll();

	delete list;
}