// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Exploring field width, padding and alignment

#include <stdafx.h>
#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>

int main() {
	using namespace std;
	cout << '|' << setfill('*') << setw(6) << 1234 << '|' << '\n';
	cout << '|' << left << setw(6) << 1234 << '|' << '\n';
	cout << '|' << setw(6) << -1234 << '|' << '\n';
	cout << '|' << right << setw(6) << -1234 << '|' << '\n';
	system("pause");
}