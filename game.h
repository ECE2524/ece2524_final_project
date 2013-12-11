#include "player.h"
#include "room.h"

#include <cstdlib>

class game
{
private:
  // input from user
  string input;
  // input string data before the first space
  string string1;
  // input string data after the first space
  string string2;
  // command is used for switch statements
  int command;
  // the current room object
  room currentRoom;
  // the player object
  player patient;

  // rooms in the game
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

  // items in the game
  string map;
  string drawing;
public:
  // class constructor
  game();
  // class destructor
  ~game();
  // initializes the game
  void gameInit();
  // prints a welcome message
  void outputWelcome();
  // prints the room information
  void outputRoom();
  // prints the map item
  void outputMap();
  // prints the drawing item
  void outputDrawing();
  // gets input string from the user
  bool getInput();
  // checks the input string entered by the user
  bool checkInput();
  // runs the game
  void run();
};
