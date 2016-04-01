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

SimpleTree::~SimpleTree()
{
}
