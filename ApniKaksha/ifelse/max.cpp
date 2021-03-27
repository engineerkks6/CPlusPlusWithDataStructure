#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cout << "Enter three number to get the max number:";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "max = " << a << endl;
        }
        else
        {
            cout << "Max = " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "max = " << b << endl;
        }
        else
        {
            cout << "max= " << c << endl;
        }
    }

    return 0;
}