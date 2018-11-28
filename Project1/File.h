#include <string>
#include "ICharacter.h"
using namespace std;

class File
{
public:
	File();
	~File();
	void readLastSaveFile(string fileName, int &totalCharacter, ICharacter character[100]);
	void readActivitiesFile(string fileName);
};

