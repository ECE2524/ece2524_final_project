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
  cout << "Room items:" << endl;
  for(list<string>::const_iterator iterator = items.begin(), end = items.end(); iterator != end; ++iterator)
  {
    cout << *iterator << endl;
  }
}

void room::setName(string newName)
{
  name = newName;
}

void room::printName()
{
  cout << name << endl;
}

void room::setDescription(string newDescription)
{
  description = newDescription;
}

void room::pringDescription()
{
  cout << description << endl;
}
