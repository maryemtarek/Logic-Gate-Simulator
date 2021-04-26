#include "Gate.h"



Gate::Gate()
{
}


Gate::~Gate()
{
}

void Gate::setInput1(Node * node)
{
	Input1 = node;
}

void Gate::setInput2(Node * node)
{
	Input2 = node;
}

void Gate::setOutput(Node * node)
{
	Output = node;
}

Node * Gate::getInput1()
{
	return Input1;
}

Node * Gate::getInput2()
{
	return Input2;
}

Node * Gate::getOutput()
{
	return Output;
}
