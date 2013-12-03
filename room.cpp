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
  for(list<int>::const_iterator iterator = intList.begin(), end = intList.end(); iterator != end; ++iterator)
  {
    cout << *iterator << endl;
  }
}
