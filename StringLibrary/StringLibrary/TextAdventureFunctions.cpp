#include<iostream>
#include<fstream>
#include<string>
#include "RickyString.h"
#include "TextAdventure.h"
using namespace std;





void Game::welcomeIntro()
{
	cout << "Text Adventure Assessment" << endl;
	cout << "===== The Misadventures of Ser Rundas =====" << endl;
	cout << "This is the story of a well known knight by the name of Ser Rundas." << endl;
	cout << "On his way back home from a long journey, he slipped on a banana and fell into a crypt." << endl;
	cout << "While descending, he thought to himself about the sweet release of death once he hits the bottom." << endl;
	cout << "Though not the death he was looking for." << endl;
	cout << "Instead he ended up falling into the cushioned lap of Lady Deth. The Necromancer." << endl;
	cout << "What will Rundas do?";
}

Player::Player()
{
	player = "Rundas";
}

void Room::displayRoom(int x, int y)
{
	string rooms[ROWS][COLS] =
	{
		{description, description, description}
		{ description, description, description }
	}
}

void Game::runGameLoop()
{
	string command;

	while (true)
	{
		cout << "--> ";
		getline(cin, command);
		
		if (command == "quit")
		{
			cout << "Thanks for playing!" << endl;
			break;
		}
		else
		{
			cout << "Invalid command." << endl;
		}
	}
}

//bool Player::FindAttack(StringUtility spellName)
//{
//	attack[0] = StringUtility("Fireball"); 
//	attack[1] = StringUtility("Slash");
//	attack[2] = StringUtility("Block"); 
//
//	if (playerInput = attack)
//}

