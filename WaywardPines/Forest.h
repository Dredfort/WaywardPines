#pragma once

#include <string>
#include "SimpleTree.h"
#include <vector>
#include "IBaseLands.h"
using std::string;


class Forest : public IBaseLand
{
public:
	Forest();
	Forest(string newLandsName, SimpleTree newTree);

	virtual void SetLandsName(string newLandsName);
	virtual string GetLandsName();

	virtual void SetDayTime(eDaytime newDayTaime=eDaytime::Day);
	virtual string GetDayTime();

	void SetYearTime(eYearTime newYearTime=eYearTime::Summer);
	string GetYearTime();

	virtual void SetCurrentTree(SimpleTree newTree);
	// by default getting 0 element from TreeArr
	virtual SimpleTree* GetCurrentTree(int i=0);
	
	virtual void SpawnTree();


	std::vector<SimpleTree*> TreeArr;	
	//virtual 
	~Forest();
private:	
	string CurrentWeather;
	string LandsName;
	SimpleTree CurrentTree;
	string DayTime;
};
