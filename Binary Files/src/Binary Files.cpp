//============================================================================
// Name        : Binary.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push,1)

struct Person{
	char name[50];
	int age;
	double height;
};


#pragma pack(pop)

int main() {

	cout << sizeof(int[10])<<endl;
	cout << sizeof(int)<<endl;
	cout << sizeof(double)<<endl;
	cout << sizeof(string)<<endl;
	cout << sizeof(Person)<<endl;

	Person someone={"Frodo",220,0.8};
	string fileName="test.bin";
	ofstream outputFile;

	outputFile.open(fileName, ios::binary);

	if(outputFile.is_open()){

		outputFile.write((char*)&someone,sizeof(Person));
		outputFile.close();

	}
	else{}
	outputFile.close();

	Person someoneElse={};
	ifstream inputFile;

	inputFile.open(fileName, ios::binary);

	if(inputFile.is_open()){

		inputFile.read((char*)&someoneElse,sizeof(Person));
		inputFile.close();

	}
	else{}
	cout <<someoneElse.name<<", "<<someoneElse.age<<","<<someoneElse.height<<endl;
	inputFile.close();

	return 0;
}
