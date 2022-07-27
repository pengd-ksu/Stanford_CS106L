#include "MyPair.h"
#include <string>
#include <iostream>

using std::string;  using std::cout;
using std::endl;

int main() {
    MyPair<int, string> my_pair1(4587, "Peng");
    cout << "First pair: " << endl;
    cout << "Number: " << my_pair1.getFirst() << " Name: " << my_pair1.getSecond() <<endl;

    MyPair<string, int> my_pair2("X", 70613916);
    cout << "Second pair: " << endl;
    cout << "Name: " << my_pair2.getFirst() << " Favourite: " << my_pair2.getSecond() <<endl;
}