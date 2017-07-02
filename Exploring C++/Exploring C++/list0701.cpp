// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Using a for loop to print ten non-negative numbers

#include <stdafx.h>
#include <iostream>
#include <ostream>

int main() {
	for (int i(0); i != 10; i = i + 1)
		std::cout << i << '\n';
	system("pause");
}
