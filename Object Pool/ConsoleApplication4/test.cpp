// ConsoleApplication4.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include "ObjectPool.h"

int main()
{

	ObjectPool o;
	Spawn s[100];
	for (int i = 0; i < 100; i++) {
		s[i] =  o.next();
		s[i].init(i);
	}
	s[99].~Spawn();
	s[99] = o.next();

	for (int i = 0; i < 100; i++) {
		s[i].print();
	}

    return 0;
}

