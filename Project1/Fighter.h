#ifndef FIGHTER_H
#define FIGHTER_H

#include "ICharacter.h"

class Fighter : public ICharacter
{
public:
	using ICharacter::ICharacter;
	~Fighter();
	void cook();
	void fight(int apReceived);
};

#endif // !FIGHTER_H