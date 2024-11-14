#include "HashObject.h"
using namespace std;
//TODO: Izmeniti metode objekta prema zahtevima zadatka
HashObject::HashObject()
{
	key = NULL;
	model = NULL;
	kubik = 0;
	brKonjSn = 0;
}

HashObject::HashObject(const char* k, const char* a, double b, int c)
{
	key = new char[strlen(k) + 1];
	strcpy(key, k);
	model = new char[strlen(k) + 1];
	strcpy(model, a);
	this->kubik = b;
	this->brKonjSn = c;
}

HashObject::~HashObject()
{
	if (key)
		delete[] key;
	if (model)
		delete[] model;
}

HashObject::HashObject(HashObject const& obj)
{
	key = strcpy(new char[strlen(obj.key) + 1], obj.key);
	model = strcpy(new char[strlen(obj.model) + 1], obj.model);
	this->kubik = obj.kubik;
	this->brKonjSn = obj.brKonjSn;
}

HashObject& HashObject::operator = (HashObject const& obj)
{
	if (this != &obj)
	{
		if (key)
			delete key;
		key = new char[strlen(obj.key) + 1];
		strcpy(key, obj.key);
		if (model)
			delete model;
		model = new char[strlen(obj.model) + 1];
		strcpy(model, obj.model);
		kubik = obj.kubik;
		brKonjSn = obj.brKonjSn;
	}
	return *this;
}

bool HashObject::operator == (HashObject const& obj)
{
	return (strcmp(this->key, obj.key) == 0) && (strcmp(this->model, obj.model) == 0) && (this->kubik==obj.kubik) && (this->brKonjSn==obj.brKonjSn);
}

//void HashObject::deleteRecord() {
//	if (model) { delete record; record = NULL; }
//}

void HashObject::print()
{
	if (key != NULL)
	{
		cout << key;
	}
	if (model != NULL)
	{
		cout << "|" << model;
	}
	if (kubik != 0)
	{
		cout << "|" << kubik;
	}
	if (brKonjSn != 0)
	{
		cout << "|" << brKonjSn;
	}
}