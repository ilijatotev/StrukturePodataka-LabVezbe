#include "HashObject.h"
using namespace std;
//TODO: Izmeniti metode objekta prema zahtevima zadatka
HashObject::HashObject()
{
	key = NULL;
	ime = NULL;
	prezime = NULL;
	sajt = NULL;
}

HashObject::HashObject(char* k, char* i,char* p,char* s)
{
	key = new char[strlen(k) + 1];
	strcpy(key, k);
	ime = new char[strlen(i) + 1];
	strcpy(ime, i);
	prezime = new char[strlen(p) + 1];
	strcpy(prezime, p);
	sajt = new char[strlen(s) + 1];
	strcpy(sajt, s);
}

HashObject::~HashObject()
{
	if (key)
		delete[] key;
	if (ime)
		delete[] ime;
	if (prezime)
		delete[] prezime;
	if (sajt)
		delete[] sajt;
}

HashObject::HashObject(HashObject const& obj)
{
	key = strcpy(new char[strlen(obj.key) + 1], obj.key);
	ime = strcpy(new char[strlen(obj.ime) + 1], obj.ime);
	prezime = strcpy(new char[strlen(obj.prezime) + 1], obj.prezime);
	sajt = strcpy(new char[strlen(obj.sajt) + 1], obj.sajt);
}

HashObject& HashObject::operator = (HashObject const& obj)
{
	if (this != &obj)
	{
		if (key)
			delete key;
		key = new char[strlen(obj.key) + 1];
		strcpy(key, obj.key);
		if (ime)
			delete ime;
		ime = new char[strlen(obj.ime) + 1];
		strcpy(ime, obj.ime);
		if (prezime)
			delete prezime;
		prezime = new char[strlen(obj.prezime) + 1];
		strcpy(prezime, obj.prezime);
		if (sajt)
			delete sajt;
		sajt = new char[strlen(obj.sajt) + 1];
		strcpy(sajt, obj.sajt);
	}
	return *this;
}

bool HashObject::operator == (HashObject const& obj)
{
	return (strcmp(this->key, obj.key) == 0) && (strcmp(this->ime, obj.ime) == 0) && (strcmp(this->prezime, obj.prezime) == 0) && (strcmp(this->sajt, obj.sajt) == 0);
}

void HashObject::deleteRecord() {
	if (ime) { delete[] ime; ime = NULL; }
	if (prezime) { delete[] prezime; prezime = NULL; }
	if (sajt) { delete[] sajt; sajt = NULL; }
}

void HashObject::print()
{
	if(key!=NULL)
	{ 
		cout << key;
	}
	if (ime != NULL)
	{
		cout << "|" << ime;
	}
	if (prezime != NULL)
	{
		cout << "|" << prezime;
	}
	if (sajt != NULL)
	{
		cout << "|" << sajt;
	}
	cout << endl;
}