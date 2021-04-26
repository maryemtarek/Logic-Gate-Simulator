#include "XORGate.h"



XORGate::XORGate()
{
}


XORGate::~XORGate()
{
}

void XORGate::calculate()
{
	if (Input1->getValue() == Input2->getValue())
	{
		Output->setValue(0);
	}
	else
	{
		Output->setValue(1);
	}
}
