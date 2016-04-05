#include "Forest.h"
#include "SimpleTree.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;

Forest::Forest(string newLandsName, string newDayTime, string newWeather, SimpleTree newTree)
	:LandsName(newLandsName),DayTime(newDayTime),CurrentWeather(newWeather),CurrentTree(newTree)
{	
	CurrentTree = newTree;
	TreeArr.push_back(&CurrentTree);	
}

void Forest::SetYearTime(eYearTime newYearTime)
{
	switch (newYearTime)
	{
	case Forest::eYearTime::Winter:
		CurrentWeather = "Winter";
		break;
	case Forest::eYearTime::Spring:
		CurrentWeather = "Spring";
		break;
	case Forest::eYearTime::Summer:
		CurrentWeather = "Summer";
		break;
	case Forest::eYearTime::Fall:
		CurrentWeather = "Fall";
		break;
	default:
		break;
	}	
}

string Forest::GetYearTime()
{
	return CurrentWeather;
}

void Forest::SetCurrentTree(SimpleTree newTree)
{
	CurrentTree = newTree;
}

SimpleTree Forest::GetCurrentTree(int i)
{
	//CurrentTree = TreeArr[i];
	auto TreeFromArr = TreeArr[i];

	return *TreeFromArr;// *TreeArr[i];// CurrentTree;
}

void Forest::SetLandsName(string newLandsName)
{ 
	//BaseLand::SetLandsName(newLandsName);
	LandsName = newLandsName;
}

string Forest::GetLandsName()
{
	return LandsName;
}

void Forest::SetDayTime(eDaytime newDayTaime/*=eDaytime::Day*/)
{
	//DayTime = newDayTaime;
	switch (newDayTaime)
	{
	case Forest::eDaytime::Day:
		DayTime = "Day";
		break;
	case Forest::eDaytime::Night:
		DayTime = "Night";
		break;
	default:
		break;
	}
}

string Forest::GetDayTime()
{
	return DayTime;
}

void Forest::SpawnTree()
{
	SimpleTree* Spawner = new SimpleTree("");
	Spawner->SetTreeName("");
	TreeArr.push_back(Spawner);
}

Forest::~Forest()
{
	cout << "\nLands was disappear..";
}
