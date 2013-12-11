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
  player patient;

  room patientroom1;
  room patientroom2;
  room patientroom3;
  room bathroom;
  room hallway2ndfloor;
  room stairs;
  room lobby;
  room wardenoffice;
  room lab;
  room operatingroom;
  room solitaryconfinement;
  room hallway1stfloor;
  room courtyard;
  room guardhouse;

  string map;
  string drawing;
public:
  game();
  ~game();
  void gameInit();
  void outputWelcome();
  void outputRoom();
  void outputMap();
  void outputDrawing();
  bool getInput();
  bool checkInput();
  void run();
};
