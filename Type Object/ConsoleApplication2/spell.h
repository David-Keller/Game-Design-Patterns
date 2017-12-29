#pragma once
#include "spellType.h"
//class spelltype;
class spell
{
public:
	friend class spellType;
	spellType type;
	
	spell(spellType& type, char* name) : type(type), damage(type.getDamage()), name(name) {}
	~spell();
	
	void getAttack() {
		type.getAttack(name);
	}

private:

	char* name;
	int damage;
};
