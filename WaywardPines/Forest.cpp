#include "Forest.h"
#include "Tree.h"

#include <string>
using std::string;

Forest::Forest(string newLocation, string newDayTime, string newWeather, SimpleTree newTree)
	:Location(newLocation),DayTime(newDayTime),CurrentWeather(newWeather),CurrentTree(newTree)
{	
	CurrentTree = newTree;
}

void Forest::SetWeather(string newWether)
{
	CurrentWeather = newWether;
}

string Forest::GetWeather()
{
	return CurrentWeather;
}

void Forest::SetCurrentTree(SimpleTree newTree)
{
	CurrentTree = newTree;
}

SimpleTree Forest::GetCurrentTree()
{
	return CurrentTree;
}

void Forest::SetTreeLocation(string newLocation)
{
	Location = newLocation;
}

string Forest::GetTreeLocation()
{
	return Location;
}

void Forest::SetDayTime(string newDayTime)
{
	DayTime = newDayTime;
}

string Forest::GetDayTime()
{
	return DayTime;
}

Forest::~Forest()
{
}
