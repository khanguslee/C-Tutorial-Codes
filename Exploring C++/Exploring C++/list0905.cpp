// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Doubling input values in a vector

#include <stdafx.h>
#include <iostream>
#include <istream>
#include <ostream>
#include <vector>

int main() {
	std::vector<int> data;
	int x(0);

	// Inputs standard input into data vector
	while (std::cin >> x)
		data.push_back(x);

	// Multiplies each item by two
	for (std::vector<int>::iterator i(data.begin()); i != data.end(); ++i)
		*i = *i * 2;

	// Prints out each item
	for (std::vector<int>::iterator i(data.begin()); i != data.end(); ++i)
		std::cout << *i << '\n';

	system("pause");
}