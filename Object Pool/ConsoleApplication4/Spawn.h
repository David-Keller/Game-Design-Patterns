#pragma once
#include <iostream>
class ObjectPool;
class Spawn
{
private:
	int HP;
	ObjectPool* _pool;


public:
	Spawn(ObjectPool *pool);
	Spawn() {}
	~Spawn();
	void init(int HP) { this->HP = HP; }
	void print() {
		std::cout << "I am a spawn with " << HP << " hit points" << std::endl;
	}
	void dead();
};

