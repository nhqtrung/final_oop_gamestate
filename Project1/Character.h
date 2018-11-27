#pragma once
#include <string>
using namespace std;

class Character
{
public:
	Character();
	Character(string i_name, int i_level, int i_hp, int i_ap);
	~Character();
	void showInfo();
private:
	string name;
	int hp;
	int level;
	int ap;
};

