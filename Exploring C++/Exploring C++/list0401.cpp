// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	01/07/2017
// User:	Angus Lee

#include <stdafx.h>
#include <iostream>
#include <ostream>
#include <string>

int main() {
	std::string shape("Triangle");
	int sides(3);

	std::cout << "Shape\t\tSides\n" << 
				 "-----\t\t-----\n";
	std::cout << "Square\t\t" << 4 << '\n' <<
				 "Circle\t\t?\n";
	std::cout << shape << '\t' << sides << '\n';

	system("pause");
}