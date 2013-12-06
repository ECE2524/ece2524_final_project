#include "player.h"
#include "room.h"

class game
{
private:
  string input;
  string command;
  string object;
public:
  game();
  ~game();
  void getInput();
  bool checkInput();
}
