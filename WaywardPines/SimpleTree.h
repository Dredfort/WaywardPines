#pragma once
#include "IBaseTree.h"

#include <string>
using std::string;

class SimpleTree : public IBaseTree
{
public:
	SimpleTree();
	SimpleTree(string newName);
	
	
	virtual void SetTreeName(string newName);
	virtual string GetTreeName();
	
	virtual string GetTreeState();	
	virtual void SetTreeState(eTreeState state=eTreeState::Born);

	virtual ~SimpleTree();
private:
	
	
	string strName;
	string strLiveState;
};
