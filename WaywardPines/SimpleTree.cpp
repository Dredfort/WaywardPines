#include "SimpleTree.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;


SimpleTree::SimpleTree(string newName)
	:strName(newName)
{
	strName = newName;
	SetTreeState(IBaseTree::eTreeState::Born);
}

void SimpleTree::SetTreeName(string newName)
{
	strName = newName;
}

string SimpleTree::GetTreeName()
{
	return strName;
}



string SimpleTree::GetTreeState()
{
	return strLiveState;
}

void SimpleTree::SetTreeState(eTreeState state)
{
	switch (state)
	{
	case SimpleTree::eTreeState::Born:
	{
		strLiveState = "born";
		break;
	}
	case SimpleTree::eTreeState::Grow:
	{
		strLiveState = "grow";
		break;
	}
	case SimpleTree::eTreeState::Beautiful:
	{
		strLiveState = "Beautiful";
		break;
	}
	case SimpleTree::eTreeState::Slender:
	{
		strLiveState = "Slender";
		break;
	}
	case SimpleTree::eTreeState::CutDown:
	{	
		///this->~SimpleTree();
		break;
	}
	default:
		break;
	}
}

SimpleTree::~SimpleTree()
{
	cout << "\n";
	cout << strName;
	cout << "Tree was cut down...\n";
}
