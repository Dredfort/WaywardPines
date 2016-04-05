#include "SimpleTree.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;


SimpleTree::SimpleTree(string newName)
	:strName(newName)
{
	strName = newName;
}

void SimpleTree::SetTreeName(string newName)
{
	strName = newName;
}

string SimpleTree::GetTreeName()
{
	return strName;
}

void SimpleTree::SetTreeState(string newLiveState)
{
	strLiveState = newLiveState;
}

string SimpleTree::GetTreeState()
{
	return strLiveState;
}

void SimpleTree::SetTreeStateEnum(eTreeState state)
{
	switch (state)
	{
	case SimpleTree::eTreeState::Born:
		strLiveState = "born";
		break;
	case SimpleTree::eTreeState::Grow:
		strLiveState = "grow";
		break;
	case SimpleTree::eTreeState::CutDown:
		this->~SimpleTree();
		break;
	default:
		break;
	}
}

SimpleTree::~SimpleTree()
{
	cout << "\nTree was cut down...\n";
}
