#include "game.h"

game::game()
{

}

game::~game()
{

}

voide game::gameInit()
{
   /* example
  room bedroom;
  bedroom.setName("bedroom");
  bedroom.setDescription("You are in a dreary bedroom with white walls and ceiling.  You look around to find a few items.");
  bedroom.addAdjacentRoom("hallway");
  bedroom.addItem("syringe");
  bedroom.addItem("shirt");
  bedroom.addItem("pants");
  bedroom.addItem("shoes");
  */
  
  room patientroom1;
  patientroom1.setName("patientroom1");
  patientroom1.setDescription("Entering the room you feel a slight breeze as the window is cracked. The tattered curtains sway back-and-forth projecting shadows on the opposing wall. On the night-stand you find a drawing of a horribly disfigured man.");
  patientroom1.addAdjacentRoom("hallway2ndfloor")
  patientroom1.addItem("drawing");
  
  /* drawing:
  
      (                      )
      |\    _,--------._    / |
      | `.,'            `. /  |
      `  '              ,-'   '
       \/_         _   (     /
      (,-.`.    ,',-.`. `__,'
       |/#\ ),-','#\`= ,'.` |
       `._/)  -'.\_,'   ) ))|
       /  (_.)\     .   -'//
      (  /\____/\    ) )`'\
       \ |V----V||  ' ,    \
        |`- -- -'   ,'   \  \      _____
 ___    |         .'    \ \  `._,-'     `-
    `.__,`---^---'       \ ` -'
       -.______  \ . /  ______,-
               `.     ,'          
   */
  
  room patientroom2;
  patientroom2.setName("patientroom2");
  patientroom2.setDescription("This room feels familiar to you. On the ground there is a journal with all of the pages but one removed. The page states, ‘They know about us’.");
  patientroom2.addAdjacentRoom("hallway2ndfloor");
  patientroom2.addItem("journal");

  room patientroom3;
  patientroom3.setName("patientroom3");
  patientroom3.setDescription("The room is empty and there are hundreds of scratches and marks on the wooden-paneled walls. Among these marks you notice 4 distinct combinations of letters. ‘SN’, ‘AK’,  ‘EB’, and  IT’.");
  patientroom3.addAdjacentRoom("hallway2ndfloor");
  patientroom3.addItem("lettercombination");

  room bathroom;
  bathroom.setName("bathroom");
  bathroom.setDescription("A mirror is located on the adjacent wall to the entrance. Looking into it you see yourself. With blood-shot eyes and veins protruding from your neck, you stare in disbelief. You see a shadow walk behind you in the mirror, but turn around to see nothing.");
  bathroom.addAdjacentRoom("hallway2ndfloor");
  bathroom.addItem("");

  room hallway2ndfloor;
  hallway2ndfloor.setName("hallway2ndfloor");
  hallway2ndfloor.setDescription("");
  hallway2ndfloor.addAdjacentRoom("patientroom1");
  hallway2ndfloor.addAdjacentRoom("patientroom2");
  hallway2ndfloor.addAdjacentRoom("patientroom3");
  hallway2ndfloor.addAdjacentRoom("bathroom");
  hallway2ndfloor.addAdjacentRoom("staircase");
  hallway2ndfloor.addItem("");

  room staircase;
  staircase.setName("staircase");
  staircase.setDescription("");
  staircase.addAdjacentRoom("hallway2ndfloor");
  staircase.addAdjacentRoom("lobby");
  staircase.addItem("");

  room lobby;
  lobby.setName("lobby");
  lobby.setDescription("What once was a nice entrance to the building is in disarray. Planted pots have been turned and the windows are shattered. Blood stains lead out of the building and a severed head is in the corner of the room.");
  lobby.addAdjacentRoom("hallway1stfloor");
  lobby.addAdjacentRoom("outdoors");
  lobby.addItem("severedhead");

  room wardenoffice;
  wardenoffice.setName("wardenoffice");
  wardenoffice.setDescription("The room is nicely decorated with rich colored wood and a large leather chair. From the ceiling, the entrails of an unknown creature hang. Below this there is a pile of blood-splattered documents. One detailing the layout of the building.");
  wardenoffice.addAdjacentRoom("hallway1stfloor");
  wardenoffice.addItem("blueprints");

   /* blueprints:
   
   Second Floor_______________________
   |                |                |
   |    Bathroom    |    Patient     |
   |                |    Room 1      |
   |______    ______|______    ______|_______
   |                                 |       |
   |           Hallway2               stairs |
   |______    ______________    _____|_______|
   |                |                |
   |    Patient     |    Patient     |
   |    Room 2      |    Room 3      |
   |________________|________________|
   
   
   
   First Floor_______________________________________
   |                |                |              |          Outdoors
   |    Lab         |    Operating   |       Lobby  |
   |                |    Room        |              |
   |______    ______|______    ______|_______       |
   |                                 |       |       
   |               Hallway1           stairs |           
   |______    ______________    _____|_______|               ____________
   |                |                |              |        |           |
   |    Solitary    |    Warden      |              |        |  Guard    |
   |    Confinement |    Office      |              |        |  House    |
   |________________|________________|______________|        |___________|
   
   
   */



  room lab;
  lab.setName("lab");
  lab.setDescription("On the wall is a diagram of the human body with marks that seem to pin-point locations to inject some kind of medication. The opposing side of the room has a table with empty vials and a patient listing. The listing details information about the different patients and what room they belong to on the second floor.");
  lab.addAdjacentRoom("hallway1stfloor");
  lab.addItem("patientlisting");

  room operatingroom;
  operatingroom.setName("operatingroom");
  operatingroom.setDescription("An examination table is centered in the room with demolished leather restraints. On the ground are numerous syringes that are empty.");
  operatingroom.addAdjacentRoom("hallway1stfloor");
  operatingroom.addItem("emptysyringes");

  // starting room
  room solitaryconfinement;
  solitaryconfinement.setName("solitaryconfinement");
  solitaryconfinement.setDescription("You have awoken to find yourself laying in the middle of a white-padded room. The single light-bulb above you flickers inconsistently, and there are no signs of life around you. Across from you there is a battered door that appears to be locked.");
  solitaryconfinement.addAdjacentRoom("hallway1stfloor");
  solitaryconfinement.addItem("hairpin");
  solitaryconfinement.addItem("tatteredclothing");

  room hallway1stfloor;
  hallway1stfloor.setName("hallway1stfloor");
  hallway1stfloor.setDescription("");
  hallway1stfloor.addAdjacentRoom("lab");
  hallway1stfloor.addAdjacentRoom("operatingroom");
  hallway1stfloor.addAdjacentRoom("solitaryconfinement");
  hallway1stfloor.addAdjacentRoom("wardenoffice");
  hallway1stfloor.addAdjacentRoom("lobby");
  hallway1stfloor.addItem("");

  room outdoors;
  outdoors.setName("outdoors");
  outdoors.setDescription("It is slightly raining and there are muddy footprints leading out of the now closed front gate. The entire yard is surrounded by a large fence topped with barbed wire. At the gate entrance there is a small building with a combination lock, requiring four numbers, on the door.");
  outdoors.addAdjacentRoom("lobby");
  outdoors.addAdjacentRoom("guardhouse");
  outdoors.addItem("");

  // ending room?
  room guardhouse;
  guardhouse.setName("solitaryconfinement");
  guardhouse.setDescription("There is a small television recording the surveillance of the different rooms onto tape. You begin to rewind the video, watching yourself explore the unknown surroundings. Once at the beginning of the tape, you see yourself laying on the operation table while a group of doctors inject you with syringes. You immediately remove yourself from the table and begin attacking the doctors. Terrified they flee, but cannot outrun you, as you attack them. Then, as if nothing happened, you slowly walk into the white-padded room, locking yourself inside.");
  guardhouse.addAdjacentRoom("outdoors");
  guardhouse.addItem("");
  
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
