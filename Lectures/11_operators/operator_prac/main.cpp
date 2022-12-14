#include "vecCompare.h"
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout;    using std::vector;
using std::string; using std:: endl;

template<class valueType>
void printVec(const heap<valueType>& h){
	cout << "{ ";
    for (valueType ele: h.elems) {
        cout << ele << endl;
    }
    /*
	for(auto it = h.elems.begin(); it != h.elems.end(); ++it){
		cout << *it << endl;
	}*/
	cout << " }" << endl;
}

int main(){
	vector<int> vec {1, 1, 1};
    heap<int> myHeap1(3, vec);
    heap<int> myHeap2(4, 1);

	cout << "myHeap1: " << endl;
    printVec(myHeap1);
    cout << "myHeap2: " << endl;
    printVec(myHeap2);

    if (myHeap1 == myHeap2) {
        cout << "They are equal." << endl;
    } else {
        cout << "No, they're not equal." << endl;
    }
	return 0;
}
