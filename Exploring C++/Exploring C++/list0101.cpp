// Book:	Exploring C++
// Author:	Ray Lischner
// Date:	30/06/2017
// User:	Angus Lee

// Sort the standard input alphabetically
// Read lines of text, sort them, and print the results to the standard output.
// If the command line names a file, read from that file. Otherwise, read from
// the standard input. The entire input is stored in memory, so don't try
// this with input files that exceed available RAM.

#include "stdafx.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>

#include <ciso646>	// Added this in because VS needs it for alternative operators

void read(std::istream& in, std::vector<std::string>& text) {
	std::string line;
	while (std::getline(in, line))
		text.push_back(line);
}

int main(int argc, char* argv[]) {
	// Part 1
	// Read the entire input into text. If the command line names a file,
	// read that file. Otherwise, read the standard input.
	std::vector<std::string> text;	// Store the lines of text here
	if (argc < 2)
		read(std::cin, text);
	else {
		if (not in) {
			std::perror(argv[1]);
			return EXIT_FAILURE;
		}
		read(in, text);
	}

	// Part 2
	// Sort the text.
	std::sort(text.begin(), text.end());

	// Part 3
	// Print the sorted text.
	std::copy(text.begin(), text.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
}