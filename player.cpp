#include "player.h"

// class constructor
player::player()
{

}

// class destructor
player::~player()
{

}

// set the name of the player
void setName(string newName)
{
	name = newName;
}

// print the name of the player
void printName()
{
	cout << name;
}

// add an item to the player inventory
void player::addInventory(string newItem)
{
  inventory.push_back(newItem);
}

// check if an item is in the player inventory
bool player::isInventory(string useItem)
{
	for(list<string>::const_iterator iterator = inventory.begin(), end = inventory.end(); iterator != end; ++iterator)
	{
		if(*iterator == useItem)
			return 1;
	}
	return 0;
}

// print the items the player inventory
void player::printInventory()
{
	cout << "Your inventory:" << endl;
	for(list<string>::const_iterator iterator = inventory.begin(), end = inventory.end(); iterator != end; ++iterator)
	{
		cout << *iterator << endl;
	}
}
