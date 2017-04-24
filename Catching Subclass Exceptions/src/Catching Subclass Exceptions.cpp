//============================================================================
// Name        : Catching.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>
using namespace std;

void goesWrong(){
	bool error1Detected=true;
	bool error2Detected=false;
	if(error1Detected){
		throw bad_alloc();
	}
	if(error2Detected){
			throw exception();
	}
}
int main() {

	try{
		goesWrong();

	}//polymorphism tells us that bad_alloc can fit into exception because its a subclass
	catch(exception &e){
		cout<<"catching exception:"<<e.what()<<endl;
	}
	catch(bad_alloc &e){
		cout <<"catching bad_alloc:"<< e.what()<<endl;
	}

	return 0;
}
