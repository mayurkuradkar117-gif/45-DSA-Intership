#include <iostream>
using namespace std;

class student
{
private:
    string name;
    string email;
    int age;

public:
    void getData()
    {
        cout << name << endl;
        cout << email << endl;
        cout << age << endl;
    }
    void setData()
    {
        name = "Mayur";
        email = "mayurkuradkar117@gmail.com";
        age = 23;
    }
};
int main()
{
    student s1;
    s1.setData();
    s1.getData();
    return 0;
}