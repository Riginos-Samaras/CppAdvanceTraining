//============================================================================
// Name        : Basic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;


void mightGoWrong() {

	bool error1 = false;
	bool error2 = true;

	if(error2){
		throw 22;
	}
	if(error1){
		throw "Something went wrong.";
	}

}
void usesMightGoWrong(){
	mightGoWrong();
}
int main() {

	try{
		usesMightGoWrong();
	}
	catch(int e)
	{
		cout<<"Error code: "<<e<<endl;
	}
	catch(char const * e){
		cout<<"Error message: "<<e<<endl;
	}

	cout<<"Still running"<<endl;

	return 0;
}
