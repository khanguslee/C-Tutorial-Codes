// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	02/07/2017
// User:	Angus Lee
// Getting the User's Name and Age

#include <stdafx.h>
#include <iostream>
#include <istream>
#include <ostream>
#include <string>

int main() {
	std::cout << "What is your name?\n";
	std::string name;
	std::cin >> name;

	std::cout << "Hey " << name << ", how old are you?\n";
	int age(0);
	std::cin >> age;

	std::cout << "Good-bye, " << name << ". You are " << age << " year";
	if (age != 1)
		std::cout << 's';
	std::cout << " old.\n";
	system("pause");
}