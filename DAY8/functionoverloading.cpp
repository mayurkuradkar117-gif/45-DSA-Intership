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
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    Student s1;
    cout << s1.sum(5, 20) << endl;
    cout << s1.sum(5, 6, 20);
    return 0;
}