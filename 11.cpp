//C++ program to illustrate switch case
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int op;
    cout << "Enter the value of a and b : ";
    cin >> a >> b;
    cout << "Enter the operation to be performed :\n";
    cout << "1.add\n2.sub\n3.mul\n4.div\n";
    cout << "Enter your option : ";
abc:
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "a+b=" << a + b;
        break;
    case 2:
        cout << "a-b=" << a - b;
        break;
    case 3:
        cout << "a*b=" << a * b;
        break;
    case 4:
        cout << "a/b=" << a / b;
        break;
    default:
        cout << "Please Enter a valid option :";
        goto abc;
        break;
    }
    cout << endl;
    return 0;
}