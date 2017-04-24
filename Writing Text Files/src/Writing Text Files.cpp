//============================================================================
// Name        : Writing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {


	fstream outFile;

	string outputFileName="text.txt";

	outFile.open(outputFileName,ios::out);
	if(outFile.is_open()){
		outFile<<"This is a line"<<endl;
		outFile<<"This is another line"<<endl;
		outFile<<"This is a third line"<<endl;
	}
	else{
		cout<<"Could not create file: "<<outputFileName<<endl;
	}
	outFile.close();
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
