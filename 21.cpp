//C++ program to find String Length
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[100];
    int l;
    cout << "Enter sting one : ";
    gets(s1);
    l = strlen(s1);
    cout << "String lenght is " << l << endl;
}