// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Reading Strings

#include <stdafx.h>
#include <iostream>
#include <istream>
#include <ostream>
#include <string>

int main() {
	std::cout << "what is your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << ", how are you? ";
	std::string response;
	std::cin >> response;
	std::cout << "Good-bye, " << name << ". I'm glad you feel " << response << "\n";
	system("pause");
}