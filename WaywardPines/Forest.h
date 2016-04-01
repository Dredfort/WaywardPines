#pragma once

#include <string>
#include "Tree.h"
using std::string;

class Forest
{
public:
	Forest();
	Forest(string newLocation, string newDayTime, string newWeather,SimpleTree newTree);

	void SetTreeLocation(string);
	string GetTreeLocation();

	void SetDayTime(string);
	string GetDayTime();

	void SetWeather(string);
	string GetWeather();

	void SetCurrentTree(SimpleTree newTree);
	SimpleTree GetCurrentTree();

	~Forest();	
private:	
	string CurrentWeather;
	string Location;
	SimpleTree CurrentTree;
	string DayTime;
};
