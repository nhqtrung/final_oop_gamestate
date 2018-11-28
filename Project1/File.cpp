#include "File.h"
#include <sstream>
#include <stdio.h>
#include <fstream>
#include <string>
#include "ICharacter.h"
#include "Cooker.h"
#include "Fighter.h"

using namespace std;


File::File()
{
}


File::~File()
{
}

void File::readLastSaveFile(string fileName, int &totalCharacter, ICharacter characters[100]) {
	string line;
	ifstream infile;
	infile.open(fileName);
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
				ICharacter character;
				while (ssin.good() && j < 4)
				{
					ssin >> characterInfo[j];
					j++;
				}
				if (characterInfo[0] == "Ignis")
				{
					character = Cooker(characterInfo[0], stoi(characterInfo[1]), stoi(characterInfo[2]), stoi(characterInfo[3]));
				}
				else
				{
					character = Fighter(characterInfo[0], stoi(characterInfo[1]), stoi(characterInfo[2]), stoi(characterInfo[3]));
				}
				characters[i] = character;
			}
		}
	}
	infile.close();
}
