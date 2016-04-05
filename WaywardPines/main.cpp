#include <iostream>
#include <string>

#include "Forest.h"
#include "Tree.h"

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
	SimpleTree* ptrTree = &cForest.GetCurrentTree();

	//ptrTree->SetTreeState("Born");
	ptrTree->SetTreeStateEnum(SimpleTree::eTreeState::grow);
	
	ptrTree->SetTreeName(TreeName);

	cout << "In " << cForest.GetTreeLocation() << " was born " << ptrTree->GetTreeName();
	cout << "\nIn " << cForest.GetTreeLocation() << " they was " << ptrTree->GetTreeState();
	cout << "\nin a " << cForest.GetDayTime() << " time and in a ";
	cForest.SetDayTime("night");
	cout << cForest.GetDayTime() << " time they was ";
	ptrTree->SetTreeState(("slender"));
	cout << ptrTree->GetTreeState() << " and ";
	ptrTree->SetTreeState(" beautiful ");
	cout << ptrTree->GetTreeState() << " they was.";

	cin >> locationName;


	return 0;
}