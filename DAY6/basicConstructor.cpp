#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    Student()
    {
        cout << "constructor Invoked.....";
    }
};
int main()
{
    Student s1;
    return 0;
}