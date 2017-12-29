// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "spell.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Creating spellTypes\n";
	spellType water = spellType( "water", 20);
	spellType fire = spellType("fire", 15);
	spellType air = spellType("air" , 10);
	spellType earth = spellType("earth", 25);

	cout << "creating spells \n";
	spell* fireball = fire.newSpell("fireball");
	spell* wave = water.newSpell("wave");
	spell* gust = air.newSpell("wind gust");
	spell* quake = earth.newSpell("quake");

	cout << "casting spells: \n";
	fireball->getAttack();
	wave->getAttack();
	gust->getAttack();
	quake->getAttack();
	
    return 0;
}

