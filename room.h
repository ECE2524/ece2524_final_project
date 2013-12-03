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
};
