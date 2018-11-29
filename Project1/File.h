#include <string>
#include "ICharacter.h"
using namespace std;

class File
{
public:
	File();
	~File();
	void readLastSaveFile(string fileName, int &totalCharacter, ICharacter characters[100]);
	void readActivitiesFile(string fileName, ICharacter characters[100], int totalCharacter);
};

