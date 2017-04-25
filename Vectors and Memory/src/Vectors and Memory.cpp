//============================================================================
// Name        : Vectors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> numbers(0);

	cout<<"Size" <<numbers.size()<<endl;

	int capacity=numbers.capacity();
	cout<<"Capacity: "<<capacity<<endl;

	for(int i=0; i<10000; i++){

		cout << "i: "<<i<<endl;
		if(numbers.capacity() != capacity){
			capacity = numbers.capacity();
			cout << "Capacity: "<<capacity<<endl;
			cout << "Size: "<<numbers.size()<<endl;
		}
		numbers.push_back(i);

	}

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
