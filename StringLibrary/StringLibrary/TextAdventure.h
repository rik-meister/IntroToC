#pragma once
#ifndef TextAdventure_H
#define TextAdventure_H
#include<iostream>
#include<fstream>
#include<string>
#include "RickyString.h"
using namespace std;


class Action
{
public:
	string name;
	string description;


	Action(string n = "", string d = "") : name(n), description(d) {}

	void touchOption() const;
};
// Base Room class
class Room
{
protected:
	Action attempt[3]; // Fixed-size array of actions
	int actionAttempt;
	string description;
	string command;

public:

	Room(string desc = "An empty room.") : description(desc), actionAttempt(0) {}

	virtual void enter();;
	void doAction(const Action& action);
	virtual ~Room() {}
};
class NecromancerCrypt : public Room
{
public:
	NecromancerCrypt() : Room("Rundas is in the crypt with a Necromancer.")
	{
		doAction(Action("You find a Necromancer looking at Rundas curiously.", "Rundas feels the urge to touch her."));
	}
	void enter() override
	{
		cout << "[NecromancerCrypt]\n";
		Room::enter();
	}
};
#endif