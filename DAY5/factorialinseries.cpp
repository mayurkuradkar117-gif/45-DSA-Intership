#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
   return n*factorial(n-1);
}
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        cout << "Factorial of  " << i << " is: " << factorial(i) << endl;
    }
    int n;
    cout << "enter n :";
    cin >> n;
   cout<< factorial(n);
    return 0;
}
