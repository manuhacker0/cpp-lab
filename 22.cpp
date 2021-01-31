// C++ program to get a substring from main string
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s1, s2;
    int pos, n;
    cout << "Enter the sting : ";
    getline(cin, s1);
    cout << "Enter the postion and number of character of substing respectively : ";
    cin >> pos >> n;
    s2 = s1.substr(pos, n);
    cout << "Substing is = " << s2 << endl;
}