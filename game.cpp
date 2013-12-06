#include "game.h"

game::game()
{

}

game::~game()
{

}

voide game::gameInit()
{
  room bedroom;
  bedroom.setName("bedroom");
  bedroom.setDescription("You are in a dreary bedroom with white walls and ceiling.  You look around to find a few items.");
  bedroom.addAdjacentRoom("hallway");
  bedroom.addItem("syringe");
  bedroom.addItem("shirt");
  bedroom.addItem("pants");
  bedroom.addItem("shoes");
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

bool game::checkInput()
{
  if(command == "move")
  {
    return TRUE;
  }
  else if(command == "pickup")
  {
    return TRUE;
  }
  else
    return FALSE;
}
