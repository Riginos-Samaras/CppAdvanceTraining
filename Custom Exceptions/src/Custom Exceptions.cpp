//============================================================================
// Name        : Custom.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class MyException: public exception
{
	int i=10;
	public:

	virtual const char* what() const throw(){
			cout<<i;
			return "something bad happened";
		}

};
class Test{
public:
	void goesWrong(){
		throw MyException();
	}


};

void changei(int *i){

	cout<<*i;

}
int main() {
	Test test;

//	/changei(&i);


	try {
		test.goesWrong();
	}
	catch(MyException &e){
		cout << e.what()<<endl;
	}
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
