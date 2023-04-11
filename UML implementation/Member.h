#pragma once
#include "Photo.h"
#include <string>
#include <list>
using namespace std;

class Member {
private:
	int id;
	string name;
	string address;
	string contact;
	list<Photo*> photos;
	int numPhoto;
public:
	Member();
	~Member() {};
	void setId(int);
	void setName(string);
	void setAddress(string);
	void setContact(string);
	void setPhoto(Photo*);
	int getId();
	string getName();
	string getAddress();
	string getContact();
	Photo* getPhoto();
	//overloaded fn to return a photo at a certain index
	Photo* getPhoto(int);
};


