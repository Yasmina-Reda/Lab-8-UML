#pragma once
#include "Photo.h"
#include <string>
#include <list>
using namespace std;

class Location {
private:
	int id;
	string name;
	string remarks;
	list<Photo*> photos;
	int numPhoto;
public:
	//I understand here that location needs at least one photo
	//so it should've been initialized in the constructor
	//however I'm also initializing the loaction in the photo
	//constructor so that would create the issue of being unable to initialize
	//one without the other, so I've set a default constructor for location
	Location();
	Location(Photo*);
	~Location() {};
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
