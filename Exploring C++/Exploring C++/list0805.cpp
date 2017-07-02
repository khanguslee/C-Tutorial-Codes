// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Program to produce formatted output

#include <stdafx.h>
#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>

int main() {
	using namespace std;
	cout << setfill('0') << setw(6) << 42 << '\n';
	cout << left << setfill('0') << setw(6) << 42 << '\n';
	cout << left << 42 << '\n';
	cout << setfill('-') << setw(4) << -42 << '\n';
	system("pause");
}