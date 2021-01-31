//C ++ program to illustrate Break statement
#include <iostream>
using namespace std;
int main()
{
    int a[10], n, e, flag = 0;
    cout << "Enter arry size : ";
    cin >> n;
    cout << "Enter the arry elements : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Element the element to be found : ";
    cin >> e;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == e)
        {
            cout << "Element found at " << i + 1 << " position\n";
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element not found \n";
    }

    return 0;
}