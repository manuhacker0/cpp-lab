//C++ program  to implement Explicit type conversion
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b = 3.2;
    a = a + (int)b;
    cout << "a = " << a << endl;
}