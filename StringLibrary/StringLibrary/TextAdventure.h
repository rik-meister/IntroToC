#pragma once
#ifndef TextAdventure_H
#define TextAdventure_H
#include<iostream>
#include<fstream>
#include<string>
#include "RickyString.h"
using namespace std;



		//GAME CLASS
class Game
{
protected:
	string player;
	const int ROWS = 3;
	const int COLS = 3;
	

public:
	int playerX = 0, playerY = 1;
	string name;
	string description;
	string playerInput;
	string mapLocation;

	string displayMap(string mapLocation);
	void welcomeIntro();
	void runGameLoop();
	string displayRoom(int x, int y);
	bool movePlayer(int& x, int& y, const string direction);
};


//PLAYER CLASS
class Player:public Game
{
public:
	Player();

};


//ROOMS CLASS
class Room:public Game
{
protected:
	const int ROWS = 3;
	const int COLS = 3;
};



//class Room;
//class Item;
//
//class Item
//{
//public:
//	string name;
//	string description;
//	bool isTakeable;
//
//	Item(string n, string desc, bool takeable = true) : name(n), description(desc), isTakeable(takeable) {} void examine() const
//	{
//		cout << description << endl;
//	}
//};
//
//class Room
//{
//public:
//	string name;
//	string description;
//	map<string, Room*> exits;
//	vector<Item*> items;
//
//	Room(string n, string desc) : name(n), description(desc) {}
//
//	void addExit(string direction, Room* targetRoom)
//	{
//		exits[direction] = targetRoom;
//	}
//	void additem(Item* item)
//	{
//		items.push_back(item);
//	}
//	void removeItem(Item* item)
//	{
//		for (size_t i = 0; i < items.size(); ++i)
//		{
//			if (items[i] == item)
//			{
//				items.erase(items.begin() + i);
//				return;
//			}
//		}
//	}
//	void displayDescription() const
//	{
//		cout << "You are in the " << name << ". " << description << endl;
//		if (!items.empty())
//		{
//			cout << "You see: " << endl;
//			for (const auto& item : items)
//			{
//				cout << item->name << " ";
//			}
//			cout << endl;
//		}
//		cout << "Exits: ";
//		for (const auto& pair : exits)
//		{
//			cout << pair.first << " ";
//		}
//		cout << endl;
//	}
//};
//
//class Player
//{
//public:
//	Room* currentRoom;
//	vector<Item*> inventory;
//
//	Player(Room* startingRoom) : currentRoom(startingRoom) {}
//
//	void move(const string& direction)
//	{
//		if (currentRoom->exits.count(direction))
//		{
//			currentRoom = currentRoom->exits[direction];
//			currentRoom->displayDescription();
//		}
//		else
//		{
//			cout << "You can't go that way." << endl;
//		}
//	}
//	void takeItem(const string& itemName)
//	{
//		for (size_t i = 0; i < currentRoom->items.size(); ++i)
//		{
//			if (currentRoom->items[i]->name == itemName && currentRoom->items[i]->isTakeable)
//			{
//				inventory.push_back(currentRoom->items[i]);
//				return;
//			}
//		}
//		cout << "You can't take that." << endl;
//	}
//	void showInventory() const
//	{
//		if (inventory.empty())
//		{
//			cout << "Your inventory is empty." << endl;
//			return;
//		}
//		cout << "Inventory: ";
//		for (const auto& item : inventory)
//		{
//			cout << item->name << " ";
//		}
//		cout << endl;
//	}
//};
//
//class Game
//{
//public:
//	Player player;
//	vector<Room*> allRooms;
//	vector<Item*> allItems;
//
//	Game() : player(nullptr) {}
//
//	void initializeGame()
//	{
//		Room* livingRoom = new Room("Living Room", "A cozy room with a fireplace.");
//		Room* kitchen = new Room("Kitechen", "A bright kitchen with a fresh smell.");
//		Room* bedroom = new Room("Bedroom", "A quiet bedroom with a large bed.");
//
//		livingRoom->addExit("north", kitchen);
//		kitchen->addExit("south", livingRoom);
//		livingRoom->addExit("east", bedroom);
//		bedroom->addExit("west", livingRoom);
//
//		Item* key = new Item("Key", "A small, shiny key.", true);
//		Item* book = new Item("Book", "A dusty old book.", true);
//
//		livingRoom->additem(book);
//		bedroom->additem(key);
//
//		allRooms.push_back(livingRoom);
//		allRooms.push_back(kitchen);
//		allRooms.push_back(bedroom);
//		allItems.push_back(key);
//		allItems.push_back(book);
//
//		player.currentRoom = livingRoom;
//	}
//	void runGameLoop()
//	{
//		string command;
//		player.currentRoom->displayDescription();
//
//		while (true)
//		{
//			cout << "> ";
//			getline(cin, command);
//
//			if (command == "quit")
//			{
//				cout << "Thanks for playing!" << endl;
//				break;
//			}
//			else if (command.rfind("go ", 0) == 0)
//			{
//				string direction = command.substr(3);
//				player.move(direction);
//			}
//			else if (command.rfind("take ", 0) == 0)
//			{
//				string itemName = command.substr(5);
//				player.takeItem(itemName);
//			}
//			else if (command == "look")
//			{
//				player.currentRoom->displayDescription();
//			}
//			else if (command == "inventory")
//			{
//				player.showInventory();
//			}
//			else
//			{
//				cout << "Invalid command." << endl;
//			}
//		}
//	}
//	~Game()
//	{
//		for (Room* room : allRooms)
//		{
//			delete room;
//		}
//		for (Item* item : allItems)
//		{
//			delete item;
//		}
//	}
//};
#endif