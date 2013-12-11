#include <list>
#include <string>
#include <iostream>

using namespace std;

class player
{
private:
  list<string> inventory;
public:
  player();
  ~player();
  void addInventory(string);
  void isInventory(string);
  void printInventory();
};
