// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Printing a multiplication table

#include <stdafx.h>
#include <iomanip>
#include <iostream>
#include <ostream>

int main() {
	using namespace std;
	
	int low_num(1);
	int high_num(10);
	int col_width(4);

	cout << right;

	// Printing the header
	cout << setw(col_width) << '*' << '|';
	for (int i(low_num); i <= high_num; i++)
		cout << setw(col_width) << i;
	cout << '\n';

	// Printing the line
	cout << setfill('-') << setw(col_width) << "" << '+' << setw((high_num - low_num + 1)*col_width) << "" << '\n';
	
	cout << setfill(' ');
	// Print the rest of the table
	for (int i(low_num); i <= high_num; i++) {			// Rows
		cout << setw(col_width) << i << '|';
		for (int j(low_num); j <= high_num; j++) {		// Columns
			cout << setw(col_width) << i*j;
		}
		cout << '\n';
	}
	
	system("pause");
}


