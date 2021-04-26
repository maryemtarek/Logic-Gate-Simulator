#include "Node.h"



Node::Node()
{
}


Node::~Node()
{
}

void Node::setName(string name)
{
	Name = name;
}

string Node::getName()
{
	return Name;
}

void Node::setValue(int value)
{
	Value = value;
}

int Node::getValue()
{
	return Value;
}
