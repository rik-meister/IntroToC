#include<iostream>
#include<fstream>
#include<string>
#include "RickyString.h"
#include "TextAdventure.h"
using namespace std;



int main()
{
    bool gameOver = false;
    

    Room* map[3][3] =
    {
        { new Room("Rundas is in the closet."), new NecromancerCrypt(), new Room("Rundas is in the Necromancer's Bedchamber.")},
        { new Room("Rundas is in the kitchen."), new Room("Rundas is at the inner chamber."), new Room("Rundas is at the sacrificial altar ran by a cat.")},
        { new Room("Rundas is in the garden."), new Room("Rundas is in the decrepit courtyard."), new Room("Rundas is at a cliff.") }
    };

    int x = 1, y = 2;
    string command;

    cout << "Text Adventure Assessment, press 'h' for the list of commands." << endl;
    cout << "===== The Misadventures of Ser Rundas =====" << endl;
    cout << "This is the story of a well known knight by the name of Ser Rundas." << endl;
    cout << "On his way back home from a long journey, he slipped on a banana and fell into a crypt." << endl;
    cout << "While descending, he thought to himself about the sweet release of death once he hits the bottom." << endl;
    cout << "Though not the death he was looking for." << endl;

    cout << "What will Rundas do?" << endl;

    while (true)
    {
        map[y][x]->enter();
        cout << "---> ";
        cin >> command;

        if (command == "quit")
        {
            break;
        }
        else if (command == "h")
        {
            cout << "To move to different rooms, type: 'go north', 'go south', 'go west', 'go east'." << endl;
            cout << "To touch, type: 'touch'." << endl;
            cout << "To end game, type: 'quit'." << endl;
        }
        else if (command == "north" && y > 0)
        {
            y--;
        }
        else if (command == "south" && y < 2)
        {
            y++;
        }
        else if (command == "west" && x > 0)
        {
            x--;
        }
        else if (command == "east" && x < 2)
        {
            x++;
        }
        else if (command == "touch")
        {
            cout << "Rundas ended up convulsing after touching the death riddled necromancer." << endl;
            gameOver = map[y][x];
            break;
        }
        else cout << "You can't go that way." << endl;
    }
    cout << "Thanks for playing!" << endl;
    return 0;
}

