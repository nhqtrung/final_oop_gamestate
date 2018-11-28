#include "Cooker.h"
#include <iostream>

Cooker::~Cooker()
{
}

void Cooker::cook() {
	ap += 2000;
}

void Cooker::fight() {
	ap += 0;
}

void Cooker::showInfo() {
	cout << "I'm a cooker" << endl;
}
