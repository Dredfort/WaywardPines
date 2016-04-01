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

	//SimpleTree SomeTree = new TreeToSpawn();
	//TreeToSpawn().SetTreeName(TreeName);
	Forest cForest(locationName,"day",Weather, SimpleTree(TreeName,"born"));

	cout << "In " << cForest.GetTreeLocation() << " was born " << cForest.GetCurrentTree().GetTreeName();
	cout << "In " << cForest.GetTreeLocation() << " they was "<<cForest.GetCurrentTree().GetTreeState();
	//cout<<" in "<< cForest.

	cin >> locationName;
	

	return 0;
}