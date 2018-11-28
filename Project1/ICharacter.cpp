#include "ICharacter.h"
#include <iostream>

using namespace std;

ICharacter::ICharacter()
{
}

ICharacter::ICharacter(string i_name, int i_hp, int i_level, int i_ap) {
	name = i_name;
	hp = i_hp;
	level = i_level;
	ap = i_ap;
	if (name == "Noctis") {
		apLevelUp = 1200;
		hpPerLevel = 15;
	}
	if (name == "Prompto") {
		apLevelUp = 1500;
		hpPerLevel = 18;
	}
	if (name == "Gladiolus") {
		apLevelUp = 800;
		hpPerLevel = 30;
	}
	if (name == "Ignis") {
		apLevelUp = 950;
		hpPerLevel = 22;
	}
}

ICharacter::~ICharacter()
{
}

void ICharacter::showInfo() {
	cout << "Hero name: " << name << endl;
	cout << "Level    : " << level << endl;
	cout << "HP       : " << hp << endl;
	cout << "AP       : " << ap << endl;
	cout << "AP UP LV : " << apLevelUp << endl;
	cout << "HP PER LV: " << hpPerLevel << endl;
}

void ICharacter::sleep() {
	int hpIncrease;
	hpIncrease = ap / apLevelUp;
	ap = ap % apLevelUp;
}
