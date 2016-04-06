#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;

class IBaseTree
{
public:
	enum class eTreeState
	{
		Born,
		Grow,
		Slender,
		Beautiful,
		CutDown
	};	

	virtual void SetTreeName(string newName) = 0;
	virtual string GetTreeName() = 0;

	virtual string GetTreeState() = 0;
	virtual void SetTreeState(eTreeState state) = 0;

	virtual ~IBaseTree() { cout << "\n i dtor \n";};
private:

};
