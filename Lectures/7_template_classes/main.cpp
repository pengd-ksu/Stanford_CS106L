#include "realvector_soln.h"
#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::string; using std:: endl;

void printVec(const RealVector<string>& vec){
	cout << "{ ";
	for(auto it = vec.cbegin(); it != vec.cend(); ++it){
		cout << *it << endl;
	}
	cout << " }" << endl;
}

// //play around with RealVector here!
int main(){
	//make an empty vector
	RealVector<string> myVec;
	cout << "My vector: ";
	printVec(myVec);

	cout << "Enter [ELEM] [INDEX]:" << endl;
	string to_add;
	size_t index;
	while(cin >> to_add >> index){
		myVec.insert(index, to_add);
		cout << "My vector: ";
		//print vector:
		printVec(myVec);

		//next prompt
		cout << "Enter [ELEM] [INDEX]:" << endl;
	}
	return 0;
}