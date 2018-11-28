#ifndef COOKER_H
#define COKKER_H

#include "ICharacter.h"

class Cooker : public ICharacter
{
public:
	using ICharacter::ICharacter;
	~Cooker();
	void fight();
	void cook();
	void showInfo();
};

#endif // !COOKER_H