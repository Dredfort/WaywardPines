#pragma once
#include <string>
using std::string;

class SimpleTree
{
public:
	SimpleTree(string newName,string newLiveState);

	void SetTreeName(string);
	string GetTreeName();

	void SetTreeState(string);
	string GetTreeState();

	~SimpleTree();
private:
	string strName;
	string strLiveState;
};
