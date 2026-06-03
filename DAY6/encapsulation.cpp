#include<iostream>
using namespace std;
class bank
{
private:
    int bankbalance = 5000;
public:
    void getbalance()
    {
        cout<< bankbalance;
    }
    void deposite(int n)
    {
        bankbalance += n;
    }
};
int main()
{
    bank b1;
    b1.getbalance();
    cout<<endl;
    b1.deposite(2000);
    b1.getbalance();
    return 0;
}