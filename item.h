#include <list>
#include <string>
#include <iostream>

using namespace std;

class item
{
private:
	// holds the name of the room
	string name;
	// holds the room description
	string description;
public:
	// class constructor
	item();
	// class destructor
	~item();
	// add an item to the player inventory
	void setName(string);
	// print the items the player inventory
	void printName();
	// set the description of an item
	void setDescription(string);
	// print the description of an item
	void printDescription();
};
