#include "FileReader.h"
#include <vector>
#include <set>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int part1() // Part 1
{
	string filename = "input3.txt";
	vector<string> lines;

	string priorities = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	readTextFile(filename, lines);

	int total = 0;

	for (string line : lines)
	{
		string r1 = line.substr(0, line.length() / 2);
		string r2 = line.substr(line.length() / 2);

		char common = '?';

		for (char c : r1)
		{
			if (r2.find(c) != string::npos)
			{
				common = c;
			}
		}

		total += priorities.find(common);
	}

	cout << total;

	return 0;
}

int main() // Part 2
{
	string filename = "input3.txt";
	vector<string> lines;

	string priorities = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	readTextFile(filename, lines);

	int total = 0;

	for (int i = 0; i < lines.size(); i += 3)
	{
		char common = '?';

		for (char c : lines[i])
		{
			if (lines[i+1].find(c) != string::npos && lines[i + 2].find(c) != string::npos)
			{
				common = c;
			}
		}

		total += priorities.find(common);
	}

	cout << total;

	return 0;
}