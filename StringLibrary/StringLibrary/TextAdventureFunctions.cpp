#include<iostream>
#include<fstream>
#include<string>
#include "RickyString.h"
#include "TextAdventure.h"
using namespace std;


void Room::enter()
{
	cout << description << endl;
	if (actionAttempt > 0) {
		cout << "Rundas can do the following:\n";
		for (int i = 0; i < actionAttempt; ++i)
			attempt[i].touchOption();
	}
}

void Room::doAction(const Action& action)
{
	if (actionAttempt < 3)
		attempt[actionAttempt++] = action;
}

void Action::touchOption() const
{
	cout << "Touch: " << name << " - " << description << endl;
}