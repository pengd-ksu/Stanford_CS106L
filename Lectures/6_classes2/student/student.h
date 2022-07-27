#include <string>
using std::string;

class Student   {
    public:
        // Contructor
        Student();
        Student(string name, int age, string state);

        string getName() const;
        void setName(string name);
        int getAge() const;
        void setAge(int age);
        string getState() const;
        void setState(string state);
        
    private:
        string name;
        int age;
        string state;
};