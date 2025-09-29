#include<iostream>
#include<fstream>
#include<string>
#include <vector>
#include <map>
#include "RickyString.h"
#include "TextAdventure.h"
using namespace std;


int main()
{
    Game game;
    game.welcomeIntro();
    game.runGameLoop();

    /*Game game;
    game.initializeGame();
    game.runGameLoop();
    return 0;*/
}

