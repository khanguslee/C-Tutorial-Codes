// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Sorting integers, using iterators to print the results

#include <stdafx.h>
#include <algorithm>
#include <iostream>
#include <istream>
#include <ostream>
#include <vector>

int main() {
	std::vector<int> data;		// Initialized to be empty
	int x(0);

	// Read integers one at a time.
	while (std::cin >> x)
		// Store each integer in the vector
		data.push_back(x);

	// Sort the vector
	std::sort(data.begin(), data.end());

	// Print the vector, one number per line.
	for (std::vector<int>::iterator i(data.begin()); i != data.end(); ++i)
		std::cout << *i << '\n';

	system("pause");
}