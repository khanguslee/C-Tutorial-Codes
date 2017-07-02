// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Doubling input values in a vector

#include <stdafx.h>
#include <iostream>
#include <istream>
#include <iterator>
#include <ostream>
#include <vector>

int main() {
	std::vector<int> data;

	std::copy(std::istream_iterator<int>(std::cin),
		std::istream_iterator<int>(),
		std::back_inserter(data));

	for (std::vector<int>::iterator i = data.begin(); i != data.end(); ++i)
		*i = *i * 2;

	std::copy(data.begin(), data.end(), std::ostream_iterator<int>(std::cout, "\n"));
	system("pause");
}