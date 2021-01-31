//C++ program to replace a String
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s1, s2;
    int i, n;
    cout << "Enter sting one : ";
    getline(cin, s1);
    cout << "Enter sting two : ";
    getline(cin, s2);
    cout << "Enter character to be replaced : ";
    cin >> n;
    cout << "Enter the position : ";
    cin >> i;

    s1.replace(i, n, s2);
    cout << "The replaced string : " << s1 << endl;
}