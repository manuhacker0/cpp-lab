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
    cout << "(x>5)&&(y<5)     = " << ((x > 5) && (y < 5)) << endl;
    cout << "(x>=10)||(y>=10) = " << ((x >= 10) || (y >= 10)) << endl;
    cout << "!((x>5)&&(y<5))  = " << !((x > 5) && (y < 5)) << endl;
    return 0;
}