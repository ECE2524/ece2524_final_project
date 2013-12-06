#include <string>
#include <list>

class room
{
private:
  list<string> items;
  list<string> contiguousRooms;
  string name;
  string description;
public:
  room();
  ~room();
  void addItem(string);
  void printItems();
  void addContiguousRoom(string);
  void printContigousRooms();
  void setName(string);
  void printName();
  void setDescription(string);
  void printDescription();
};
