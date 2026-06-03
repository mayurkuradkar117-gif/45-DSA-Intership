#include<iostream>
using namespace std;
class Student
{   
    public:
    string name;
    int age;
    Student(string n, int a){
        name=n;
        age=a;
    }

    };
    int main()
    {
        Student s1("Mayur",23);
        cout<<"the age is: "<<s1.age<<endl;
        cout<<"the name is: "<<s1.name<<endl;
        return 0;
    }