#include <iostream>
#include <string>

#include "Forest.h"
#include "SimpleTree.h"

using namespace std;

int main()
{
	string locationName;
	string Weather;
	string TreeName;


	cout << "Enter a location to grow some tree: ";
	cin >> locationName;
	cout << "\nEnter a weather: ";
	cin >> Weather;
	cout << "\nWhat kind of tree did you like to spawn?: ";
	cin >> TreeName;

	
	Forest cForest(locationName, "day", Weather, SimpleTree(TreeName));
	cForest.SpawnTree();
	SimpleTree* ptrTree = &cForest.GetCurrentTree(); 

	
	ptrTree->SetTreeStateEnum(SimpleTree::eTreeState::Grow);
	
	ptrTree->SetTreeName(TreeName);

	cout << "In " << cForest.GetLandsName() << " was born " << ptrTree->GetTreeName();
	cout << "\nIn " << cForest.GetLandsName() << " they was " << ptrTree->GetTreeState();
	cForest.SetDayTime(Forest::eDaytime::Day);
	cout << "\nin a " << cForest.GetDayTime() << " time and in a ";
	cForest.SetDayTime(Forest::eDaytime::Night);
	cout << cForest.GetDayTime() << " time they was ";
	ptrTree->SetTreeState(("slender"));
	cout << ptrTree->GetTreeState() << " and ";
	ptrTree->SetTreeState(" beautiful ");
	cout << ptrTree->GetTreeState() << " they was.";

	cForest.SpawnTree();
	ptrTree->SetTreeStateEnum(SimpleTree::eTreeState::CutDown);
	cin >> locationName;


	return 0;
}