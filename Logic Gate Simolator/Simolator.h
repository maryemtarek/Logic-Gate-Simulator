#pragma once
#include "Gate.h"
#include "Node.h"
class Simolator
{
	Gate * Gates[500];
	Node * Nodes[1000];
	int NumOfNodes;
	int NumOfGates;

public:
	Simolator(string filename);
	~Simolator();
	int getNumOfNodes();
	int getNumOfGates();
	Node* FindNode(string NodeName);
	Node* AddNode(string NodeName);
	Node* FindorAddNode(string NodeName);
	Gate* AddGate(string type);
	void Simulate();
	void Load(string FileName);
};

