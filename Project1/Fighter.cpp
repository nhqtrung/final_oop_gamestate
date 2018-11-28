#include "Fighter.h"

Fighter::~Fighter()
{
}

void Fighter::cook() {
	ap += 0;
}

void Fighter::fight(int apReceived) {
	ap += apReceived;
}