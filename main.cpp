#include iostream
#include "game.h"

using namspace std;

int main()
{
  game theGame;
  
  theGame.gameInit();

  while(1)
  {
    game.run();
  }

return 0;
}
