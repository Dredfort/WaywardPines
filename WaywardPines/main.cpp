#include <iostream>
#include <string>

#include "Forest.h"
#include "SimpleTree.h"

using namespace std;

int main()
{
	string locationName;
	int TreesQ = 1;
	string TreeName;


	cout << "Enter a location to grow some tree: ";
	cin >> locationName;	
	cout << "\nWhat kind of tree did you like to spawn?: ";
	cin >> TreeName;

	
	Forest cForest(locationName, SimpleTree(TreeName));
	SimpleTree* ptrTree1 = cForest.GetCurrentTree();

	cForest.SpawnTree();	

	//cForest.GetCurrentTree().SetTreeState(IBaseTree::eTreeState::Born);
	ptrTree1->SetTreeState(IBaseTree::eTreeState::Grow);
	
	ptrTree1->SetTreeName(TreeName);

	cout << "In " << cForest.GetLandsName() << " was born " << ptrTree1->GetTreeName();
	cout << "\nIn " << cForest.GetLandsName() << " they was " << ptrTree1->GetTreeState();
	cForest.SetDayTime(Forest::eDaytime::Day);
	cout << "\nin a " << cForest.GetDayTime() << " time and in a ";
	cForest.SetDayTime(Forest::eDaytime::Night);
	cout << cForest.GetDayTime() << " time,\n they was ";
	//ptrTree1->SetTreeState(("slender"));
	ptrTree1->SetTreeState(SimpleTree::eTreeState::Slender);
	cout << ptrTree1->GetTreeState() << " and ";
	//ptrTree1->SetTreeState(" beautiful ");
	ptrTree1->SetTreeState(SimpleTree::eTreeState::Beautiful);
	cout << ptrTree1->GetTreeState() << " they was.\n";

	cout << cForest.TreeArr.size();
	ptrTree1->SetTreeState(SimpleTree::eTreeState::CutDown);
	cout << cForest.TreeArr.size();

	cin >> locationName;


	return 0;
}