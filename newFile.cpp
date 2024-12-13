#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#inlcude <fstream>
using namespace std;

int main() {
	
	double myOutputList;
	ifstream myReadFile("input.txt");

	while (getline (myReadFile, myOutputList)) {
	
	cout << myOutputList;
	
	}

	vector<double> leftList(myOutputList);
	vector<double> rightList(myOutputList);

	//do some kind of calculation 

	//spit out result

	myReadFile.close();
}
