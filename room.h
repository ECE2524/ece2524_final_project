#include <string>
#include <list>

class room
{
private:
  string name;
  string description;
  list<string> items;
public:
  room();
  ~room();
  void addItem(string);
  void printItems();
  void room setName(string);
  void room printName();
  void room setDescription(string);
  void room printDescription();
};
