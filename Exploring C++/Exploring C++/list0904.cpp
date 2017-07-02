// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Sorting integers, using only generic algorithms and iterator adapters

#include <stdafx.h>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>

int main() {
	std::vector<int> data;

	// Read integers one at a time
	std::copy(std::istream_iterator<int>(std::cin),
		std::istream_iterator<int>(),
		std::back_inserter(data));

	// Sort the vector.
	std::sort(data.begin(), data.end());

	// Print the vector, one number per line.
	std::copy(data.begin(), data.end(),
		std::ostream_iterator<int>(std::cout, "\n"));

	system("pause");
}