//C++ program to illustrate Logical Operators
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the value of X : ";
    cin >> x;
    cout << "Enter the value of Y : ";
    cin >> y;
    cout << "x&y    = " << (x & y) << endl;
    cout << "x|y = " << (x | y) << endl;
    cout << "!x  = " << !x << endl;
    cout << "x<<1 = " << (x << 1) << endl;
    cout << "y>>1 = " << (y >> 1) << endl;
    return 0;
}