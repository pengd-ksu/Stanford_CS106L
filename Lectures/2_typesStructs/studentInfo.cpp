#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    std::string state;
    int age;
};

void printStudentInfo(Student s) {
    std::cout << s.name << " from " << s.state;
    std::cout << " (" << s.age << ")" << std::endl;
}

int main()
{

    Student s;
    s.name = "Frank";
    s.state = "MN";
    s.age = 21;
    printStudentInfo(s);
}