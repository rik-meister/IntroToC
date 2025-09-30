#include<iostream>
#include<fstream>
#include<string>
#include "RickyString.h"
#include "TextAdventure.h"
using namespace std;





void Game::welcomeIntro()
{
	cout << "Text Adventure Assessment, press 'h' for the list of commands." << endl;
	cout << "===== The Misadventures of Ser Rundas =====" << endl;
	cout << "This is the story of a well known knight by the name of Ser Rundas." << endl;
	cout << "On his way back home from a long journey, he slipped on a banana and fell into a crypt." << endl;
	cout << "While descending, he thought to himself about the sweet release of death once he hits the bottom." << endl;
	cout << "Though not the death he was looking for." << endl;
	cout << "Rundas finds himself in the crypt with a Necromancer." << endl;
	
	cout << "What will Rundas do?";
}

Player::Player()
{
	player = "Rundas";
}

string Game::displayRoom(int x, int y)
{
	const int ROWS = 3;
	const int COLS = 3;

	//string rooms[ROWS][COLS] =
	//{
	//	{ "This is a closet, Rundas climbed into a closet.", "Rundas finds himself in the crypt with a Necromancer.", "Rundas stumbles into the Necromancer's Bedroom."},
	//	{ "Rundas notices what seems to be a kitchen.", "Rundas dances on the inner chamber floor.", "Rundas finds that the sacrificial altar is ran by a cat."},
	//	{ "Rundas notices this use to be a garden.", "Rundas takes note of the decrepit courtyard.", "Rundas finds himself at a cliff."}
	//};
	string rooms[ROWS][COLS] =
	{
		{ "Rundas is in the closet.", "Rundas is in the crypt with a Necromancer.", "Rundas is in the Necromancer's Bedchamber."},
		{ "Rundas is in the kitchen.", "Rundas is at the inner chamber.", "Rundas is at the sacrificial altar ran by a cat."},
		{ "Rundas is in the garden.", "Rundas is in the decrepit courtyard.", "Rundas is at a cliff."}
	};
	cout << rooms[x][y] << endl;
	return rooms[x][y];
}
string Game::displayMap(string mapLocation)
{
	mapLocation = displayRoom(playerX, playerY);
	
	if (mapLocation == "Rundas is in the closet.")
	{
		cout << " X |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
	}
	else if (mapLocation == "Rundas is in the crypt with a Necromancer.")
	{
		cout << "   | X |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
	}
	else if (mapLocation == "Rundas is in the Necromancer's Bedchamber.")
	{
		cout << "   |   | X " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
	}
	else if (mapLocation == "Rundas is in the kitchen.")
	{
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << " X |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
	}
	else if (mapLocation == "Rundas is at the inner chamber.")
	{
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   | X |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
	}
	else if (mapLocation == "Rundas is at the sacrificial altar ran by a cat.")
	{
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   | X " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
	}
	else if (mapLocation == "Rundas is in the garden.")
	{
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << " X |   |   " << endl;
	}
	else if (mapLocation == "Rundas is in the decrepit courtyard.")
	{
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   | X |   " << endl;
	}
	else if (mapLocation == "Rundas is at a cliff.")
	{
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   |   " << endl;
		cout << "---+---+---" << endl;
		cout << "   |   | X " << endl;
	}
	
}
bool Game::movePlayer(int& x, int& y, const string direction)
{
	if (direction == "go north" && x > 0)
	{
		x--;
		return true;
	}
	else if (direction == "go south" && x < ROWS - 1)
	{
		x++;
		return true;
	}
	else if (direction == "go east" && y < COLS - 1)
	{
		y++;
		return true;
	}
	else if (direction == "go west" && y > 0)
	{
		y--;
		return true;
	}
	else if (direction == "where is Rundas?")
	{
		return true;
	}
	else
	{
		cout << "You can't go that way!" << endl;
		false;
	}
}

void Game::runGameLoop()
{
	string command;
	
	while (true)
	{
		cout << "--> ";
		getline(cin, command);
		
		if (command == "h")
		{
			cout << "===== Command List =====" << endl;
			cout << "Type in any of these commands" << endl;
			cout << "To check your surroundings: 'where is Rundas?'" << endl;
			cout << "To move in different directions: 'go north', 'go east', 'go south', 'go west'" << endl;
			cout << "To end the game: 'quit'" << endl;
		}
		if (command == "quit")
		{
			cout << "Thanks for playing!" << endl;
			break;
		}
		if (command == "where is Rundas?")
		{
			displayRoom(playerX, playerY);
			displayMap(mapLocation);
		}
		if (movePlayer(playerX, playerY, command))
		{
			cout << " ";
		}
		else
		{
			cout << "Invalid command." << endl;
			false;
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

