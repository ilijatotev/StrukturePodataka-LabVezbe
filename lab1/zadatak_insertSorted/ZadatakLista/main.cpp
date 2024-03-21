#include "LList.h"

void main()
{
	LList *list = new LList();
	list->insertSorted(6);
	list->printAll();
	list->insertSorted(7);
	list->printAll();
	list->insertSorted(2);
	list->printAll();
	list->insertSorted(7);
	list->printAll();
	list->insertSorted(1);
	list->printAll();
	list->insertSorted(9);
	list->printAll();
	list->insertSorted(4);
	list->printAll();

	delete list;
}