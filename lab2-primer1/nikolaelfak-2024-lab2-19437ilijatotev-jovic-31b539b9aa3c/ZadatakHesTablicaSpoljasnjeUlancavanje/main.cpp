#pragma once
#include"ChainedHashTable.h"

void main()
{
	ChainedHashTable tablica(64);
	//TODO: dodati testiranje tablice prema zahtevu zadatka

	HashObject o1 = HashObject("AA1234000000012406", "mazda", 1.1, 3);
	HashObject o2 = HashObject("BB1278000000022207", "alfa", 1.2, 4);
	HashObject o3 = HashObject("AA1256000000032208", "opel", 1.3, 4);
	HashObject o4 = HashObject("BB1255000000042309", "mazda", 1.5, 5);
	HashObject o5 = HashObject("CC1235000000052105", "opel", 1.5, 6);
	HashObject o6 = HashObject("DD1234000000062005", "dacia", 1.6, 10);
	HashObject o7 = HashObject("EE1222000000071910", "reno", 1.7, 15);
	HashObject o8 = HashObject("FF1111000000081811", "bmw", 1.8, 20);
	HashObject o9 = HashObject("GG2244000000091812", "bmw", 1.9, 50);
	HashObject o10 = HashObject("HH1235000000012413", "dacia", 2.1, 30);

	HashObject o11 = HashObject("HH1235000000012413", "renault", 3.1, 60);

	tablica.insert(o1);
	tablica.insert(o2);
	tablica.insert(o3);
	tablica.insert(o4);
	tablica.insert(o5);
	tablica.insert(o6);
	tablica.insert(o7);
	tablica.insert(o8);
	tablica.insert(o9);
	tablica.insert(o10);

	tablica.insert(o11);

	tablica.print();

	tablica.find(o3.getKey()).print();

	//XXYYYYZZZZZZZZBBAA


}