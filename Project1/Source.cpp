#include <iostream>
#include <sstream>
#include <stdio.h>
#include <fstream>
#include <string>
#include "Character.h"
using namespace std;

int main() {
	string line;
	Character characters[100];
	int totalCharacter;
	ifstream infile;
	infile.open("input.txt");
	if (infile)
	{
		getline(infile, line);
		totalCharacter = stoi(line);
		if (totalCharacter > 0)
		{
			for (int i = 0; i < totalCharacter; i++)
			{
				getline(infile, line);
				string *characterInfo = new string[totalCharacter];
				stringstream ssin(line);
				int j = 0;
				string name;
				int level, hp, ap;
				while (ssin.good() && j < 4)
				{
					ssin >> characterInfo[j];
					j++;
				}
				Character character = Character(characterInfo[0], stoi(characterInfo[1]), stoi(characterInfo[2]), stoi(characterInfo[3]));
				character.showInfo();
			}
		}
	}
	infile.close();
	return 0;
};