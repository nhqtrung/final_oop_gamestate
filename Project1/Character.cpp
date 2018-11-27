#include "Character.h"
#include <iostream>


Character::Character()
{
	name = "";
	hp = 0;
	level = 0;
	ap = 0;
}


Character::Character(string i_name, int i_level, int i_hp, int i_ap) {
	name = i_name;
	level = i_level;
	hp = i_hp;
	ap = i_ap;
}

Character::~Character()
{
}

void Character::showInfo() {
	cout << "Hero name: " << name << endl;
	cout << "Level    : " << level << endl;
	cout << "HP       : " << hp << endl;
	cout << "AP       : " << ap << endl;
}