#include<iostream>
using namespace std;
class Student{
public:
    string name;
    string  email;
    int age;

};
int main()
{
    Student s1;
    s1.name = "Mayur";
    s1.email = "mayurkuradkar117@gmail.com";
    s1.age = 23;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Email: "<<s1.email<<endl;
    cout<<"Age: "<<s1.age<<endl;
    return 0;
}