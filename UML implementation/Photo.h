#pragma once
#include <string>
//it was more convenient to use the STL
//library rather than implementing my own since that is not
//the point of the assignment
//also will only #include it and <string> in class photo
//because I will then include photo.h it in all other classes
#include <list>
#include "Album.h"
#include "Tag.h"
#include "Member.h"
#include "Location.h"
using namespace std;

//Please note that despite including the same header for Photo in all
//other classes, for some reason it's only working in album.h while in the 
// other files it gives "undeclared identifier" errors

class Photo {
private:
	int id;
	string title;
	string remarks;
	string type;
	string privacy;
	const Member* member;
	const Location* location;
	list<Tag*> tags; //because a photo can have more than one tag
	int numTag;
public:
	//must have a default constructor for the lists
	Photo() {};
	//note to self: you cannot protoype initializer lists
	Photo(Member*, Location*); //the implementation of this constructow will have an initializer list
	~Photo() {};
	void setId(int);
	void setTitle(string);
	void setRemarks(string);
	void setType(string);
	void setPrivacy(string);
	void setTag(Tag*);
	int getId();
	string getTitle();
	string getRemarks();
	string getType();
	string getPrivacy();
	Tag* getTag();
	//overloaded fn to get a Tag at a certain index
	Tag* getTag(int);
	Member* getMember();
	Location* getLocation();

};
