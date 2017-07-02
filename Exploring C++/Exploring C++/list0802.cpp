// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Printing a table of powers the right way

#include <stdafx.h>
#include <iomanip>
#include <iostream>
#include <ostream>

int main() {
	std::cout << " N   N^2    N^3\n";
	for (int i = 1; i != 21; ++i) {
		std::cout << std::setw(2) << i 
				  << std::setw(6) << i*i
				  << std::setw(7) << i*i*i 
				  << "\n";
	}
	system("pause");
}