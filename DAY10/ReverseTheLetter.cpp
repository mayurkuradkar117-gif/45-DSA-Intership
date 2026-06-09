#include <iostream>1
using namespace std;
int main()
{
     for (int i = 5; i >= 1; i--)
    {
        char a = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout <<a<< " ";
            a++;
        }
        cout << endl;
    }

    return 0;
}