#include "stdafx.h"
#include "ObjectPool.h"


ObjectPool::ObjectPool()
{
	// create all the spawn objects for the pool
	for (int i = 0; i < PoolSize; i++) {
		Spawn* s = new Spawn(this);
		spawnPool.push_front(s);
	}
}


ObjectPool::~ObjectPool()
{
}


void ObjectPool::poolReturn(Spawn *s) {
	spawnPool.push_back(s);
}
Spawn ObjectPool::next() {
	//check to see if spawnpool has any open entries
	if(!spawnPool.empty()) return *spawnPool.back();
	// if not create a new one
	else {
		Spawn* s = new Spawn(this);
		return *s;
	}
}