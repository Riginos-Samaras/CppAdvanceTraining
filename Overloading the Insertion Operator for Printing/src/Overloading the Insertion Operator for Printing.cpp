//============================================================================
// Name        : Overloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
private:
	static const int b;
	int id;
	string name;

public:
	Test(): id(0),name(""){

	}

	Test(int id, string name): id(id), name(name){

	}

	void print() {
		cout << id << ": " << name << endl;
	}

	const Test &operator=(const Test &other){
		//other.id=10;
		id = other.id;
		name = other.name;
		return *this;
	}

	const Test &operator+(const Test &other){
		id=other.id+id;
		return *this;
	}

	Test (const Test &other){
		cout<<"Copy constructor"<<endl;
		id=other.id;
		name=other.name;

	}

};

int main() {

	Test test1(10,"Mike");
	test1.print();

	cout<<3<<2;

	return 0;
}
