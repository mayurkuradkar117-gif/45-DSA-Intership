#include <iostream>
using namespace std;

void printEven(int n)
{
    if (n > 0)
    {
        printEven(n - 1);

        if (n % 2 == 0)
            cout << n << " ";
    }
}

int main()
{
    int N;
    cin >> N;

    printEven(N);

    return 0;
}