#include <iostream>
#include "game.h"

using namspace std;

int main()
{
  game theGame;
  
  theGame.gameInit();

  while(1)
  {
    theGame.run();
  }

return 0;
}
