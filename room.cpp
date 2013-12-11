#include "room.h"

#include <iostream>

// class constructor
room::room()
{

}

// class destructor
room::~room()
{

}

// add an item to the room
void room::addItem(string newItem)
{
  items.push_back(newItem);
}

// print the items in a room
void room::printItems()
{
  cout << "Room items:\n";
  for(list<string>::const_iterator iterator = items.begin(), end = items.end(); iterator != end; ++iterator)
  {
    cout << *iterator << "\n";
  }
  cout << "\n";
}

// add an ajacent room
void room::addAdjacentRoom(string newRoom)
{
  adjacentRooms.push_back(newRoom);
}

// check if a room is adjacent to a room
bool room::isAdjacentRoom(string nextRoom)
{
	for(list<string>::const_iterator iterator = adjacentRooms.begin(), end = adjacentRooms.end(); iterator != end; ++iterator)
	{
		if(*iterator == nextRoom)
			return 1;
	}
	return 0;
}

// print all adjacent rooms
void room::printAdjacentRooms()
{
  cout << "Adjacent rooms:" << "\n";
  for(list<string>::const_iterator iterator = adjacentRooms.begin(), end = adjacentRooms.end(); iterator != end; ++iterator)
  {
    cout << *iterator << "\n";
  }
  cout << "\n";
}

// set the name of a room
void room::setName(string newName)
{
  name = newName;
}

// print the name of a room
void room::printName()
{
  cout << "Room name: " << name << "\n\n";
}

// set the description of a room
void room::setDescription(string newDescription)
{
  description = newDescription;
}

// print the description of a room
void room::printDescription()
{
  cout << description << "\n\n";
}
