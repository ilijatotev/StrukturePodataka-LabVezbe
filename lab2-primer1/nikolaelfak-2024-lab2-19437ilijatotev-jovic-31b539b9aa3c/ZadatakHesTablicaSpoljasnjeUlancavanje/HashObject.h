#pragma once
#include <iostream>
using namespace std;
class HashObject
{
private:
	char* key;
	char* model;
	double kubik;
	int brKonjSn;

public:
	//TODO: Izmeniti metode objekta prema zahtevima zadatka
	HashObject();
	HashObject(const char* k, const char* a, double b, int c);
	HashObject(HashObject const& obj);
	~HashObject();
	HashObject& operator = (HashObject const& obj);
	bool operator == (HashObject const& obj);
	//void deleteRecord();
	char* getKey() { return key; }
	//char* getRecord() { return record; }
	bool isEqualKey(char* k) { return strcmp(key, k) == 0; }
	void print();
};