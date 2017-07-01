// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	01/07/2017
// User:	Angus Lee

/// Read integers and print a message that tells the user
/// whether the number is even or odd
#include "stdafx.h"
#include <iostream>
#include <istream>
#include <ostream>

int main() {
	int x;
	while (std::cin >> x) {
		if (x % 2 == 0)
			std::cout << x << " is even.\n";
		else
			std::cout << x << " is odd.\n";
	}
}