//C++ program  to concatenate two strings ( + operator)
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter sting one : ";
    getline(cin, s1);
    cout << "Enter sting two : ";
    getline(cin, s2);
    s1 = s1 + s2;
    cout << "Concatinated sting is : " << s1;
}