#include <iostream>
using namespace std;

int main()
{
    string str = "Mayur";
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'O' || str[i] == 'u')
        {
            count++;
        }
    }

    cout << "Vowels = " << count;

    return 0;
}