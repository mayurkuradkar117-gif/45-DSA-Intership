#include<iostream>
using namespace std;

int greet(int n)
{
    if(n==0)
    {
        return 0;
    }
   return n+greet(n-1);
}
int main()
{
    int n;
    cout << "enter n :";
    cin >> n;
   cout<< greet(n);
    return 0;
}