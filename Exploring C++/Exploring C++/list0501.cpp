// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	01/07/2017
// User:	Angus Lee
// Demonstrating Input and Output

#include <stdafx.h>
#include <iostream>
#include <istream>
#include <ostream>

int main() {
	std::cout << "Enter a number: ";
	int x;
	std::cin >> x;
	std::cout << "Enter another number: ";
	int y;
	std::cin >> y;

	int z(x + y);
	std::cout << "The sum of " << x << " and " << y << " is " << z << "\n";
	system("pause");
}