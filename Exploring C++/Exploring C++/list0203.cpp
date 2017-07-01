// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	01/07/2017
// User:	Angus Lee

#include <stdafx.h>

#include <iostream>
#include <limits>
#include <ostream>

int main() {
	// Note that "digits" mean binary digits, i.e., bits.

	std::cout << "Bits per bool: " << std::numeric_limits<bool>::digits << '\n';
	system("pause");
}