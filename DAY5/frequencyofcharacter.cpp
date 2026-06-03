#include<iostream>
using namespace std;
int main()
{
    string str = "MAYUR";
    char ch = 'A';
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    cout << "Frequency of " << ch << " is: " << count;

    return 0;
}
