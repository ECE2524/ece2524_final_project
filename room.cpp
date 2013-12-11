#include "room.h"

#include <iostream>

room::room()
{

}

room::~room()
{

}

void room::addItem(string newItem)
{
  items.push_back(newItem);
}

void room::printItems()
{
  cout << "Room items:\n";
  for(list<string>::const_iterator iterator = items.begin(), end = items.end(); iterator != end; ++iterator)
  {
    cout << *iterator << "\n";
  }
  cout << "\n";
}

void room::addAdjacentRoom(string newRoom)
{
  adjacentRooms.push_back(newRoom);
}

bool room::isAdjacentRoom(string nextRoom)
{
	for(list<string>::const_iterator iterator = adjacentRooms.begin(), end = adjacentRooms.end(); iterator != end; ++iterator)
	{
		if(*iterator == nextRoom)
			return 1;
	}
	return 0;
}

void room::printAdjacentRooms()
{
  cout << "Adjacent rooms:" << "\n";
  for(list<string>::const_iterator iterator = adjacentRooms.begin(), end = adjacentRooms.end(); iterator != end; ++iterator)
  {
    cout << *iterator << "\n";
  }
  cout << "\n";
}

void room::setName(string newName)
{
  name = newName;
}

void room::printName()
{
  cout << "Room name: " << name << "\n\n";
}

void room::setDescription(string newDescription)
{
  description = newDescription;
}

void room::printDescription()
{
  cout << description << "\n\n";
}
