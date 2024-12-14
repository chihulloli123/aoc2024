#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {

	//vector<string> myOutputList;
	vector<int> myLeftList;
	vector<int> myRightList;

	//string rightline;
	//string leftline;
	
	ifstream myReadFile("input.txt");
	if (!myReadFile) {
		cerr << "Error opening file!" << endl;
		return 1;
	}

	string sLine;
	int lineNumber = 0;
	while (getline(myReadFile, sLine)) {
		lineNumber++;
		int left, right;
		if (sscanf(sLine.c_str(), "%d %d" , &left, &right) == 2) {
		myLeftList.push_back(left);
		myRightList.push_back(right);
	} else {
			cerr << "Wrong" << lineNumber << ": " << sLine << endl;
			return 1;
		}
		//myOutputList.push_back(line);
	}
	
	myReadFile.close();	
 
	sort(myLeftList.begin(), myLeftList.end());
	sort(myRightList.begin(), myRightList.end());

	int dayOneAnswer = 0;
	for (size_t i = 0; i < myLeftList.size(); i++) {
		dayOneAnswer  += abs(myLeftList[i] - myRightList[i]);
	}
	
	cout << "Day 1 Answer: " << dayOneAnswer << endl;
	
	return 0;