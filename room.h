#include <string>
#include <list>

class room
{
private:
  list<string> items;
  list<string> adjacentRooms;
  string name;
  string description;
public:
  room();
  ~room();
  void addItem(string);
  void printItems();
  void addAdjacentRoom(string);
  void printAdjacentRooms();
  void setName(string);
  void printName();
  void setDescription(string);
  void printDescription();
};
