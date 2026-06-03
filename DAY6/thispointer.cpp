#include <iostream>
using namespace std;

class student
{
public:
    string name;
    string age;

    student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "the name is: " << name << endl;
        cout << "the age is: " << age << endl;
    };
    
        void show(){
            cout << this;
}
};
int main()
{
    student s1("Mayur", 23);
    s1.display();
    return 0;
}