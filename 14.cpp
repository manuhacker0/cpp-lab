//C ++ program to illustrate Continue Statement
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a value to print odd numbers : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            continue;

        cout << i << "\t";
    }
}