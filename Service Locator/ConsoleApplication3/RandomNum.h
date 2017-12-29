#pragma once
#include <random>
#include "Random.h"
class RandomNum: public Random
{
public:
	RandomNum(int seed);
	~RandomNum();

	virtual int Range(int start, int end);

private:
	
};

