// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Compute sum of integers from 10 to 20

#include <stdafx.h>
#include <iostream>
#include <ostream>

int main() {
	int sum(0);

	for (int i(10); i != 21; i = i + 1)
		sum = sum + i;

	std::cout << "Sum of 10 to 20 = " << sum << '\n';
	system("pause");
}