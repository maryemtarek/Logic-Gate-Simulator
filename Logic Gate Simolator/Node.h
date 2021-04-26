#pragma once
#include <string>
using std::string;

class Node
{
	string Name;
	int Value;
public:
	Node();
	~Node();
	void setName(string name);
	string getName();
	void setValue(int value);
	int getValue();
	
};

