#include "game.h"

game::game()
{

}

game::~game()
{

}

void game::getInput()
{
  input.clear();
  command.clear();
  object.clear();

  cout << "What do you do?" << endl;
  cin >> input;
  
  int i = 0;
  while((input[i] != ' ') && (i <= input.size()))
  {
    command += input[i];
    i++;
  }
  i++
  while(i <= input.size())
  {
    object += input[i];
    i++
  }
}
