#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            break;
        }
    }

    if (i == n)
    {
        cout << "Your No is Prime : " << n;
    }

    return 0;
}