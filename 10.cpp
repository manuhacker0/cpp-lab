//C++ program to check grade of a student using else if ladder
#include <iostream>
using namespace std;
int main()
{
    int mks;
    char g;

ABC:
    cout << "Enter the marks :";
    cin >> mks;
    if (mks >= 90 && mks <= 100)
    {
        cout << "Your grade is A+\n";
    }
    else if (mks < 90 && mks >= 80)
    {
        cout << "Your grade is A\n";
    }
    else if (mks < 80 && mks >= 70)
    {
        cout << "Your grade is B+\n";
    }
    else if (mks < 70 && mks >= 60)
    {
        cout << "Your grade is B\n";
    }
    else if (mks < 60 && mks >= 50)
    {
        cout << "Your grade is c\n";
    }
    else if (mks < 50 && mks >= 0)
    {
        cout << "Your are fail\n";
    }
    else
    {
        cout << "Please Enter the valid number between 0-100\n";
        goto ABC;
    }
}