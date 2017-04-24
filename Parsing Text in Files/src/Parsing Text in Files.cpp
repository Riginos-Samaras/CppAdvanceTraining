//============================================================================
// Name        : Parsing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string filename = "stats.txt";
	ifstream input;

	input.open(filename);
	if(!input.is_open()){
		return 1;
	}

	while(input){
		string line;
		std::getline(input,line);
		int population;
		input >> population;

		cout<<"'"<<line<<"'"<<" -- "<<population<<"'"<<endl;


	}
	input.close();
	return 0;
}
