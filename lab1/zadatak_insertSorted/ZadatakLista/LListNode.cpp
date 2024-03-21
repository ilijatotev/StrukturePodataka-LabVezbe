#include "LListNode.h"


LListNode::LListNode()
{
	next=NULL;
}

LListNode::LListNode(int i) 
{ 
	info = i;
	next=NULL;
}

LListNode::LListNode(int i, LListNode* n)
{
	info = i;
	next = n;
}

int LListNode::print()
{
	return info;
}

bool LListNode::isEqual(int el)
{
	return el == this->info;
}

bool LListNode::isGreater(int el)
{
	return el > this->info;
}

bool LListNode::isLower(int el)
{
	return el < this->info;
}

LListNode::~LListNode()
{
}
