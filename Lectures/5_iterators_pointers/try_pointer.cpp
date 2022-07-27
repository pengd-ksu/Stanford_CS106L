#include <iostream>
using std::cout;    using std::endl;

int main() {
    int x = 5;
    int* pointerToInt = &x;
    cout << "Show pointer dereference: " << *pointerToInt << endl;

    std::pair<int, int> pair = {1, 2};
    std::pair<int, int>* pointerToPair = &pair;
    cout << "First in the pair: " << (*pointerToPair).first << endl;
    cout <<  "Second in the pair: " << pointerToPair->first << endl;

    std::string lands = "Xadia";
    // iterator
    auto iter = lands.begin();
    cout << "Print with iterator: " << *iter << endl;

    char* firstChar = &lands[0];
    cout << "First char in: " << lands << *firstChar << endl;

    return 0;
}