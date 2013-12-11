#include <iostream>
#include "game.h"

using namespace std;

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
