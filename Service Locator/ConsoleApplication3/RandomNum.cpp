#include "stdafx.h"
#include "RandomNum.h"


RandomNum::RandomNum(int seed)
{
	std::srand(seed);
}


RandomNum::~RandomNum()
{
}

int RandomNum::Range(int start, int end) {
	int range = end - start;
	int rand = std::rand();
	return rand % range + start;
}