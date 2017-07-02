// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Sorting Integers

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
	for (std::vector<int>::size_type i(0); i != data.size(); i = i + 1)
		std::cout << data.at(i) << '\n';

	system("pause");
}