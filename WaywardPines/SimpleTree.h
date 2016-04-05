#pragma once
#include <string>
#include "IBaseTree.h"

using std::string;

class SimpleTree : public IBaseTree
{
public:
	SimpleTree();
	SimpleTree(string newName);
	
	
	void SetTreeName(string newName);
	string GetTreeName();

	void SetTreeState(string);
	string GetTreeState();
	void SetTreeStateEnum(eTreeState state=eTreeState::Born);

	virtual ~SimpleTree();
private:
	
	
	string strName;
	string strLiveState;
};
