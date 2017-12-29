#include "stdafx.h"
#include "spellType.h"
#include "spell.h"


spell* spellType::newSpell(char * name) { return new spell(*this, name); }


spellType::~spellType()
{
}
