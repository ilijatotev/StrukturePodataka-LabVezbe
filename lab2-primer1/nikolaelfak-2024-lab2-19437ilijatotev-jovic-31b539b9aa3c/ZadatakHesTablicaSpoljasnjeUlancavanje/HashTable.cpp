#include"HashTable.h"

unsigned int HashTable::h(char* key)
{
	return g(f(key));
}

unsigned int HashTable::f(char* key)
{
	//XXYYYYZZZZZZZZBBAA

	int i = 0;
	uint16_t h = 0;
	while (key[i] != '\0')
		h = h * 101 + key[i++];
	//TODO:Implementirati funkciju koja prevodi char u unsigned int
	return h;
}

unsigned int HashTable::g(unsigned int key)
{
	unsigned int a = 2654435769;
	unsigned int ak = a * key;
	return ak >> (32 - 6);

	//TODO:Implementirati funkciju koja prevodi unsigned int u [0...M-1]
}

