// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	01/07/2017
// User:	Angus Lee

// Read the program and determine what the program does.
// Keeps reading from standard input until a non-number is input
#include "stdafx.h"

#include <iostream>
#include <istream>
#include <limits>
#include <ostream>

int main() {
	int min(std::numeric_limits<int>::max());
	int max(std::numeric_limits<int>::min());
	bool any(false);
	int x;

	while (std::cin >> x) {
		any = true;
		if (x < min)
			min = x;
		if (x > max)
			max = x;
	}
	
	if (any)
		std::cout << "min = " << min << "\nmax = " << max << '\n';

	system("pause");
}
