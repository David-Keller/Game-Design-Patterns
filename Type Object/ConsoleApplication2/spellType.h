#pragma once
#include <string>
#include <iostream>
//#include "spell.h"
//enum element {
//	fire, water, air, earth
//};
class spell;
class spellType
{
public:
	spellType( char* e, int damage) :e(e), damage(damage) {}
	~spellType();
	int getDamage() { return damage; }
	char * getElement() { return e; }
	spell* newSpell( char * name);
	
	void getAttack(char * attack) { std::cout << "The " << attack << " does " << damage << " " << e << " damage." << std::endl; }

private:
	char* e;
	int damage;
};

