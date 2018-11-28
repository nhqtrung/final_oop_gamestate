#include <iostream>
#include <sstream>
#include <stdio.h>
#include <fstream>
#include <string>
#include "ICharacter.h"
#include "Cooker.h"
#include "Fighter.h"
#include "File.h"

using namespace std;

int main() {
	File m_file;
	int totalCharacter;
	ICharacter characters[100];
	m_file.readLastSaveFile("input.txt", totalCharacter, characters);
	characters[2].showInfo();
	getchar();
	return 0;
};