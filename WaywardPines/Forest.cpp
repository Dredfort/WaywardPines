#include "Forest.h"
#include "SimpleTree.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;

Forest::Forest(string newLandsName, SimpleTree newTree)
	:LandsName(newLandsName),CurrentTree(newTree)
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

SimpleTree* Forest::GetCurrentTree(int i){
	
	SimpleTree* TreeFromArr = TreeArr.at(i);// TreeArr[i];

	return TreeFromArr;
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
	/*SimpleTree* Spawner = new SimpleTree("");
	if (Spawner)
	{
		Spawner->SetTreeName("");
		TreeArr.push_back(Spawner);
		cout << "\nin the forest was grow tree...\n";
	}*/
}

Forest::~Forest()
{
	
	TreeArr.clear();
	cout << "\nLands was disappear..";
}
