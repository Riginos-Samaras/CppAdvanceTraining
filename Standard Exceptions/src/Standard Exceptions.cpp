//============================================================================
// Name        : Standard.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class CanGoWrong{
	public:
		CanGoWrong(){
			char *pMemory = new char[199999999999999];
			delete [] pMemory;
		}

};

int main() {

	try{

		CanGoWrong wrong;
	}
	catch(std::bad_alloc &e){
			cout <<"Caught exception: "<<e.what()<<endl;
	}
	catch(std::exception &e){
				cout <<"Caught exception: "<<e.what()<<endl;
		}


	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
