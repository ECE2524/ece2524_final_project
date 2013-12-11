#include "player.h"

player::player()
{

}

player::~player()
{

}

void player::addInventory(string newItem)
{
  inventory.push_back(newItem);
}

bool player::isInventory(string useItem)
{
	for(list<string>::const_iterator iterator = inventory.begin(), end = inventory.end(); iterator != end; ++iterator)
	{
		if(*iterator == useItem)
			return 1;
	}
	return 0;
}

void player::printInventory()
{
  cout << "Your inventory:" << endl;
  for(list<string>::const_iterator iterator = inventory.begin(), end = inventory.end(); iterator != end; ++iterator)
  {
    cout << *iterator << endl;
  }
}
