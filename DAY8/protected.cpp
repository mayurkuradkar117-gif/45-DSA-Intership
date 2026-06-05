#include<iostream>
using namespace std;
class Parent
{
    protected:
    string name = "Mayur";
};
class Child : public Parent
{
    public:
     void getdata()
    {
        cout <<this->name;

    }
};
int main()
{
    Child c1;
    c1.getdata();
    return 0;
}