#pragma once
#include "Node.h"
class Gate
{
protected:
	Node* Input1;
	Node* Input2;
	Node* Output;
public:
	Gate();
	~Gate();
	void setInput1(Node* node);
	void setInput2(Node* node);
	void setOutput(Node* node);
	Node* getInput1();
	Node* getInput2();
	Node* getOutput();
	virtual void calculate()=0;


};

