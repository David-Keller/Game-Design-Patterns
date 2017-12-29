// ConsoleApplication1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <chrono>
#include <iostream>
#include "GameLoop.h"
#include "command.h"

using namespace std;

void testprint(GameLoop *game) {
	//cout << "update: " << (game->current - game->timeFromStart).count() << endl;
	cout << "update: Time since last update: " << game->lag*1000 << "milli seconds.\n";
}


class test : public command {
public:
	GameLoop *game;
	void exicute() {
		testprint(game);
	}
};

int main()
{

	cout << "creating game \n";
	GameLoop game;
	test debug;

	cout << "injecting test function\n";
	debug.game = &game;
	game.addUpdate(&debug);

	game.start();
	


	return 0;
}

