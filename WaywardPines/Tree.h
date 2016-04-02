#pragma once
#include <string>

using std::string;

class SimpleTree
{
public:
	SimpleTree();
	SimpleTree(string newName);

	void SetTreeName(string);
	string GetTreeName();

	void SetTreeState(string);
	string GetTreeState();

	enum class eTreeState { 
	born,
	grow
	};
	void SetTreeStateEnum(eTreeState state);

	~SimpleTree();
private:
	
	
	string strName;
	string strLiveState;
};
