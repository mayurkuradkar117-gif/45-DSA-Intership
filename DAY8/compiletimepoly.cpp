#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    Student()
    {
        cout << "Default Constructor called...\n";
    }
    Student(string n, int a)
    {
        cout << "Parameterized Constructor called...\n";
        name = n;
        age = a;
    }
};
int main()
{
    Student s1;
    Student s2("Mayur", 20);
}