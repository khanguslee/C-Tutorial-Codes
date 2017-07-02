// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Using and reusing a loop control variable name

#include <stdafx.h>
#include <iostream>
#include <ostream>

int main() {
	std::cout << '+';
	for (int i(0); i != 20; i = i + 1)
		std::cout << '-';
	std::cout << "+\n|";

	for (int i(0); i != 3; i = i + 1)
		std::cout << ' ';
	std::cout << "Hello, reader!";

	for (int i(0); i != 3; i = i + 1)
		std::cout << ' ';
	std::cout << "|\n+";

	for (int i(0); i != 20; i = i + 1)
		std::cout << '-';
	std::cout << "+\n";
	system("pause");
}