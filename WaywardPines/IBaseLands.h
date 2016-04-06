#pragma once

#include <string>
using std::string;

class IBaseLand
{
public:
	enum class eDaytime
	{
		Day,
		Night
	};

	enum class eYearTime
	{
		Winter,
		Spring,
		Summer,
		Fall
	};
	
	virtual void SetLandsName(string)=0;
	virtual string GetLandsName()=0;

	virtual void SetDayTime(eDaytime newDayTaime) = 0;
	virtual string GetDayTime() = 0;

	virtual void SetCurrentTree() {};
	virtual void GetCurrentTree() {};

	void SpawnTree(int quantity) {};
	
	//virtual ~IBaseLand() {};
private:

};
