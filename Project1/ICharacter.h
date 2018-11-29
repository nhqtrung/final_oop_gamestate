#ifndef ICHARACTER_H
#define ICHARACTER_H

#include <string>
using namespace std;

class ICharacter
{
	public:
		ICharacter();
		ICharacter(string i_name, int i_hp, int i_level, int i_ap);
		~ICharacter();
		virtual void showInfo();
		void sleep();
	protected:	
		string name;
		int hp;
		int level;
		int ap;
		int apLevelUp;
		int hpPerLevel;
		//virtual void fight() = 0;
};

#endif