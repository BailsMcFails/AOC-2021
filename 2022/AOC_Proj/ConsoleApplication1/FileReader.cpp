// Reads in a text file and writes it to a vector of lines
#include "FileReader.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void readIntFile(string filename, vector<int>& lines)
{
	// Open file
	std::ifstream in(filename.c_str());

	// Get all the lines
	std::string str;
	while (std::getline(in, str))
	{
		// Convert line to int and push to back
		lines.push_back(stoi(str));
	}

	// Close the file
	in.close();
};

void readTextFile(string filename, vector<string>& lines)
{
	// Open file
	ifstream in(filename.c_str());

	// Get all the lines
	string str;
	while (getline(in, str))
	{
		lines.push_back(str);
	}

	// Close the file
	in.close();
};