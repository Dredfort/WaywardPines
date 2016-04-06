#include "Forest.h"
#include "SimpleTree.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;

Forest::Forest(string newLandsName)
	:LandsName(newLandsName)
{	
	//CurrentTree = newTree;
	//TreeArr.push_back(&CurrentTree);
	//SpawnTree(1);
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

void Forest::SetCurrentTree(int newTree)
{
	CurrentTree = TreeArr.at(newTree);
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

void Forest::SpawnTree(int quantity)
{
	for (int i = 0; i < quantity; i++)
	{
		TreeArr.push_back(new SimpleTree(""));
	}
}

void Forest::CutDownTree(int i)
{
	TreeArr.at(i)->~SimpleTree();
	TreeArr.erase(TreeArr.begin() + i);
}

Forest::~Forest()
{	
	TreeArr.clear();
	cout << "\nLands was disappear..";
}
