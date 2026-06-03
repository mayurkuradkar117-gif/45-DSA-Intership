#include <iostream>
using namespace std;
int main ()
{
    int num, i, count = 2;
    cout << "Enter a number: ";
    cin >> num;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
            
        }
    }
    if (count == 0)
        cout << " a prime number." << endl;
    else
        cout << "not a prime number." << endl;
    return 0;
}
