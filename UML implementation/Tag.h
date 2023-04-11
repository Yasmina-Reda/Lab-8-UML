#pragma once
#include "Photo.h"
#include <string>
#include <list>
using namespace std;

class Tag{
private:
	int id;
	string name;
	string remarks;
	list<Photo*> photos;
	int numPhoto;
public:
	Tag();
	~Tag() {};
	void setId(int);
	void setName(string);
	void setRemarks(string);
	void setPhoto(Photo*);
	int getId();
	string getName();
	string getRemarks();
	Photo* getPhoto();
	//overloaded fn to return a photo at a certain index
	Photo* getPhoto(int);
};

