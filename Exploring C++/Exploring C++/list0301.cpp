// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	01/07/2017
// User:	Angus Lee

/// Read the program and determine what the program does.

#include "stdafx.h"

#include <iostream>
#include <ostream>

int main() {
	// Initialise sum and count variables to 0
	int sum(0);
	int count(0);
	int x;

	while (std::cin >> x) {
		sum = sum + x;
		count = count + 1;
	}
	
	if (!count)
		std::cout << "Please input at least 1 integer" << '\n';
	else 
		std::cout << "average = " << sum / count << '\n';
	system("pause");
}