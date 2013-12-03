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
