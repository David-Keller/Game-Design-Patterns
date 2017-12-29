#pragma once
#include "Spawn.h"
#include <list>
using namespace std;
class ObjectPool
{
public:
	ObjectPool();
	~ObjectPool();
	void poolReturn(Spawn *s);
	Spawn next();

private:
	const static int PoolSize = 100;
	list<Spawn*> spawnPool;
};

