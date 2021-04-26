#include "Simolator.h"
#include "AndGate.h"
#include "ORGate.h"
#include "XORGate.h"
#include <iostream>
#include <fstream>
using namespace std;
Simolator::Simolator(string filename)
{
	NumOfGates = 0;
	NumOfNodes = 0;
	Load(filename);

}


Simolator::~Simolator()
{
}

int Simolator::getNumOfNodes()
{
	return NumOfNodes;
}

int Simolator::getNumOfGates()
{
	return NumOfGates;
}

Node * Simolator::FindNode(string NodeName)
{
	for (int i = 0; i < NumOfNodes; i++)
	{
		if (Nodes[i]->getName() == NodeName)
			return Nodes[i];
		
	}

	return nullptr;
}

Node *Simolator::AddNode(string NodeName)
{
	Node* n = new Node();
	n->setName(NodeName);
	Nodes[NumOfNodes] = n;
	NumOfNodes++;
	return n;
}

Node * Simolator::FindorAddNode(string NodeName)
{
	Node* node = FindNode(NodeName);
	if (node == nullptr)
	{
		return  AddNode(NodeName);
	}
	return node;
}

Gate * Simolator::AddGate(string type)
{
	if (type == "AND")
	{
		Gates[NumOfGates] = new AndGate();
		NumOfGates++;
	}
	else if (type == "OR")
	{
		Gates[NumOfGates] = new ORGate();
		NumOfGates++;
	}
	else
	{
		Gates[NumOfGates] = new XORGate();
		NumOfGates++;
	}
	return Gates[NumOfGates-1];
}

void Simolator::Simulate()
{
	for (int i = 0; i < NumOfGates; i++)
	{
		Gates[i]->calculate();
	}
}

void Simolator::Load(string FileName)
{
	
	ifstream myfile;
	myfile.open(FileName);
	while (!myfile.eof())
	{
		string s;
		myfile >> s;
		if (s == "SET")
		{
			string name, value;
			myfile >> name;
			myfile >> value;
			Node* node = FindorAddNode(name);
			node->setValue(stoi(value));
		}
		else if (s == "SIM")
		{
			Simulate();
		}
		else if (s == "OUT")
		{
			string name;
			myfile >> name;
			Node* node = FindNode(name);
			if (node == nullptr)
			{
				cout << "No Node Called" << name << endl;
			}
			else
			{
				cout <<"Node "<<node->getName()<<" contain value "<<node->getValue() << endl;
			}
		}
		else 
		{
			Gate * gate = AddGate(s);
			string in1, in2, out;
			myfile >> in1 >> in2 >> out;
			gate->setInput1(FindorAddNode(in1));
			gate->setInput2(FindorAddNode(in2));
			gate->setOutput(FindorAddNode(out));

		}
	}
}
