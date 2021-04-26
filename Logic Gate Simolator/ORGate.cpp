#include "ORGate.h"



ORGate::ORGate()
{
}


ORGate::~ORGate()
{
}

void ORGate::calculate()
{

	if (Input1->getValue() == 1 || Input2->getValue() == 1)
		Output->setValue(1);
	else
		Output->setValue(0);
}
