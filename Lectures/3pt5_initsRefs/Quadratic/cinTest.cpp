#include <string>
#include <iostream>

using std::cout; using std::cin;
using std::string; using std::endl;

int main() {
    string str;
    int x;
    cout << "Please type intger x and string str: " << endl;
    std::cin >> x >> str;
    cout << "x: " << x << " str: " << str << endl;
}