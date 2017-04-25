//============================================================================
// Name        : STL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {

	map<string, vector<int> > scores;

	scores["Mikes"].push_back(15);
	scores["Riginos"].push_back(10);
	scores["Maria"].push_back(25);
	scores["Riginos"].push_back(100);



	for(map<string, vector<int> >::iterator it=scores.begin(); it!=scores.end(); it++){
		string name=it->first;
		vector<int> scoreList=it->second;
		cout<<name<<": "<<flush;
		for(int i=0; i<scoreList.size(); i++){
			cout<<scoreList[i]<<" "<<flush;
		}
		cout<<endl;
	}
	return 0;
}
