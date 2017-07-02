// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Print a table of squares and cubes

// Prints table with left alignment using tabs
#include <stdafx.h>
#include <iomanip>
#include <iostream>
#include <ostream>

int main() {
	std::cout << "N\tN^2\tN^3\n";
	for (int i = 1; i != 21; ++i) {
		std::cout << i << "\t" << i*i << "\t" << i*i*i << "\n";
	}
	system("pause");
}