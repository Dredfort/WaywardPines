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
	Forest(string newLandsName, string newDayTime, string newWeather,SimpleTree newTree);

	virtual void SetLandsName(string newLandsName);
	virtual string GetLandsName();

	void SetDayTime(eDaytime newDayTaime=eDaytime::Day);
	string GetDayTime();

	void SetYearTime(eYearTime newYearTime=eYearTime::Summer);
	string GetYearTime();

	void SetCurrentTree(SimpleTree newTree);
	SimpleTree GetCurrentTree(int i=0);

	//const static int ArraySize = 10;
	std::vector<SimpleTree*> TreeArr;	

	void SpawnTree();

	virtual ~Forest();
private:	
	string CurrentWeather;
	string LandsName;
	SimpleTree CurrentTree;
	string DayTime;
};
