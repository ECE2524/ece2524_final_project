#include <list>
#include <string>
#include <iostream>

using namespace std;

class player
{
private:
	// linked list stores player inventory items
	list<string> inventory;
public:
	// class constructor
	player();
	// class destructor
	~player();
	// add an item to the player inventory
	void addInventory(string);
	// check if an item is in the player inventory
	bool isInventory(string);
	// print the items the player inventory
	void printInventory();
};
