//C++ program to print 1 to n prime numbers
#include <iostream>
using namespace std;
int main()
{
    int n, flag = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                flag++;
        }
        if (flag == 0)
            cout << i << "\t";
        flag = 0;
    }
}
