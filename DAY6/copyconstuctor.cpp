#include <iostream>
using namespace std;

class student
{
public:
    string name = "Mayur";
    int age = 23;
    void show()
    {
        cout << "the name is: " << name << endl;
        cout << "the age is: " << age << endl;
    }
};
int main()
{
    student s1;
    student s2 (s1); 
    s2.show();
    return 0;
}