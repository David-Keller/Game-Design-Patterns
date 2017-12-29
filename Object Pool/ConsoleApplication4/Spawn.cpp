#include "stdafx.h"
#include "Spawn.h"
#include "ObjectPool.h"


Spawn::Spawn(ObjectPool *pool)
{
	_pool = pool;
}


Spawn::~Spawn()
{
	_pool->poolReturn(this); // i think this is safe??
}

void Spawn::dead() {

}