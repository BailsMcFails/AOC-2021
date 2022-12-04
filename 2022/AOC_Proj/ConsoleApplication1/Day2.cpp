#include <map>
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include "FileReader.h"

using namespace std;

int day2()
{
	// Part 1
	map<char, int> scores1 = { {'X', 1}, {'Y', 2}, {'Z', 3}};
	map<string, int> results1 = { {"A X", 3}, {"A Y", 6}, {"A Z", 0}, 
								 {"B X", 0}, {"B Y", 3}, {"B Z", 6},
		                         {"C X", 6}, {"C Y", 0}, {"C Z", 3} };

	// Part 2
	map<char, int> scores2 = { {'X', 0}, {'Y', 3}, {'Z', 6} };
	map<string, int> results2 = { {"A X", 3}, {"A Y", 6}, {"A Z", 0},
								 {"B X", 0}, {"B Y", 3}, {"B Z", 6},
								 {"C X", 6}, {"C Y", 0}, {"C Z", 3} };

	string filename = "input2.txt";
	vector<string> lines;

	readTextFile(filename, lines);

	int total = 0;

	for (string line : lines)
	{
		total += results2[line] + scores2[line[0]];
	}

	cout << total;

	return 0;
}