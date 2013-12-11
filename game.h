#include "player.h"
#include "room.h"

class game
{
private:
  string input;
  string string1;
  string string2;
  int command;
  room currentRoom;
  player currentPlayer;
public:
  game();
  ~game();
  void gameInit();
  void getInput();
  bool checkInput();
  void run();
};
