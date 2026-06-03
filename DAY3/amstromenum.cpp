#include <iostream>
using namespace std;
int main()
{
    int num, original, lastdigit, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while (num>0)
    {
        lastdigit = num % 10;
        sum = sum+(lastdigit*lastdigit*lastdigit);
        num /= 10;
    }
    if (original == sum)
        cout << "The number is an Armstrong number." << endl;
    else
        cout << "The number is not an Armstrong number." << endl;
    return 0;
}