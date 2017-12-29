#pragma once
//#include "RandomNum.h"
#include "Random.h"
class locator
{
private:
	
public:
	static Random* getRandom() {
		return R;
	}
	//locator();
	//~locator();
	static void provide(Random* Rand) {
		R = Rand;
	}
	static locator::Random* R;
};

