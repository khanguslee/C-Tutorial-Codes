// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// You cannot use the loop control variable outside the loop

#include <stdafx.h>
#include <iostream>
#include <ostream>

int main() {
	for (int i(0); i != 10; i = i + 1)
		std::cout << i << '\n';
	std::cout << "i = " << i << '\n';
	system("pause");
}
