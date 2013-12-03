#include <string>
#include <list>

class room
{
private:
  list<string> items;
public:
  room();
  ~room();
  void addItem(string);
  void printItems();
}

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
  for(list<int>::const_iterator iterator = intList.begin(), end = intList.end(); iterator != end; ++iterator)
  {
    cout << *iterator;
  }
}
