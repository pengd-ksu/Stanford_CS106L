#include "student.h"
#include <iostream>

using std::cout;    using std::endl;
using std::string;

string stringify(const Student& s);

int main() {
    Student frankie;
    frankie.setName("Frankie");
    frankie.setAge(21);
    frankie.setState("MN");
    cout << frankie.getName() << " is from " << frankie.getState() << endl;

    Student sathya("Sathya", 20, "New Jersey");
    cout << sathya.getName() << " is from " << sathya.getState() << endl;

    string sathyaAge = stringify(sathya);
    cout << sathyaAge << endl;

    return 0;
}

string stringify(const Student& s) {
    return s.getName() + " is " + std::to_string(s.getAge()) + " years old.";
}