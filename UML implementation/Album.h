#pragma once
#include "Photo.h"
#include <string>
#include <list>
using namespace std;

class Album {
private:
	int id;
	string title;
	string remarks;
	list<Photo*> photos;
	int numPhoto;
public:
	Album(Photo*);
	~Album() {};
	Album createAlbum() 
	{ 
		Album newAlbum(photos.front());
		Photo* ptr = photos.front();
		for (int i=1; i<numPhoto;i++)
		{
			newAlbum.setPhoto(ptr+i);
		}

		return newAlbum; 
	}
	void setId(int);
	void setTitle(string);
	void setRemarks(string);
	void setPhoto(Photo*);
	int getId();
	string getTitle();
	string getRemarks();
	Photo* getPhoto();
	//overloaded fn to return a photo at a certain index
	Photo* getPhoto(int);

};
