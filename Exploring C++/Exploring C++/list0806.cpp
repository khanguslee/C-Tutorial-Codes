// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// A copy of listing 8-5, but using member functions

#include <stdafx.h>
#include <iostream>
#include <ostream>

int main() {
	using namespace std;

	cout.fill('0');
	cout.width(6);
	cout << 42 << '\n';
	cout.setf(ios_base::left, ios_base::adjustfield);
	cout.width(6);
	cout << 42 << '\n';
	cout << 42 << '\n';
	cout.fill('-');
	cout.width(4);
	cout << -42 << '\n';
	system("pause");
}