#include "Tree.h"
#include <string>
using std::string;


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
	case SimpleTree::eTreeState::born:
		strLiveState = "born";
		break;
	case SimpleTree::eTreeState::grow:
		strLiveState = "grow";
		break;
	default:
		break;
	}
}

SimpleTree::~SimpleTree()
{
}
