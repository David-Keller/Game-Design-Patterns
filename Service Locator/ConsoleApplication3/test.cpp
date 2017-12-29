// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RandomNum.h"
#include "locator.h"
#include <iostream>


void test() {
	Random* R = locator::getRandom();
	 std::cout << R->Range(0, 100);

}

int main()
{
	RandomNum *R = new RandomNum(100);
	locator::provide(R);

	test();
	/*R->Range(0, 100);*/

	
    return 0;
}

