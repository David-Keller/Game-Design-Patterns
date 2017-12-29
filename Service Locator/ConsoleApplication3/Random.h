#pragma once
class Random
{
public:
	Random();
	~Random();

	virtual int Range(int start, int end) = 0;
};

