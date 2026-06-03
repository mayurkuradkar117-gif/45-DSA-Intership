#include <iostream>
using namespace std;

void greet(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "Hello, World!" << endl;
    greet(n - 1);
}
int main()
{
    int n = 5;
    greet(n);
    return 0;
} 