#include <string>
#include <iostream>
#include "student.h"

using std::string;  using std::cout;
using std::endl;

// Constructor
Student::Student() {
    age = 0;
    name = "";
    state = "";
}
Student::Student(string name, int age, string state) {
    this->name = name;
    this->age = age;
    this->state = state;
}

string Student::getName() const{
    return name;
}
void Student::setName(string name) {
    this->name = name;
}

int Student::getAge() const{
    return age;
}
void Student::setAge(int age) {
    if (age >= 0) {
        this -> age = age;
    }
    else {
        cout << "Age cannot be negative!" << endl;
    };
}

string Student::getState() const{
    return state;
}
void Student::setState(string state) {
    this->state = state;
}