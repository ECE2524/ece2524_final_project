#include <list>
#include <string>

class player
{
private:
  list<string> inventory;
public:
  player();
  ~player();
  void addInventory(string);
  void printInventory();
};
