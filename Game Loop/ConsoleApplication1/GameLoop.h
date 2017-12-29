#pragma once
#include "command.h"
#include <chrono>
#include <list>
#include <iostream>

class GameLoop {
public:
	int end = 0;
	std::list<command*> updateList;


	std::chrono::high_resolution_clock clock;
	double framerate = (1.0f / 30.0f) * 1.0f;
	double lag = 0;
	std::chrono::time_point<std::chrono::steady_clock> timeFromStart;
	std::chrono::time_point<std::chrono::steady_clock> current;
	std::chrono::time_point<std::chrono::steady_clock> previous;

	void update() {
		std::list<command*>::iterator it;
		for (it = updateList.begin(); it != updateList.end(); it++) {
			(*it)->exicute();
		}
		
	}

	void addUpdate(command * c) {
		updateList.push_back(c);
	}

	GameLoop();
	~GameLoop();
	void start() {


		timeFromStart = clock.now();
		current = clock.now();
		previous = current;
		std::chrono::duration<double> elapsed;



		while (end == 0) {
			current = clock.now();
			elapsed = current - previous;
			previous = current;
			lag += elapsed.count();
			//std::cout << lag << std::endl;
			if (lag > framerate) {
				update();
				lag = lag - framerate;
			}

		}
	}
};