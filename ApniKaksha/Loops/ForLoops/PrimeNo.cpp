#include <iostream>
using namespace std;
int main()
{

    int n, i;
    cout << "Enter the No To Check The Prime : \n";
    cin >> n;
    // for (i = 2; i < n; i++)
    // {
    //     cout << i;
    //     if (n % i == 0)
    //     {
    //         cout << "Not Prime No : ";
    //         break;
    //     }
    //     cout<<endl;
    // }
    // if (i == n)
    // {
    //     cout << "Is A Prime No .";
    // }

    // to Short the looping time
    for (i = 2; i < n / 2; i++)
    {
        cout << i;
        if (n % i == 0)
        {
            cout << "Not Prime No : ";
            break;
        }
        cout << endl;
    }
    if (i == n / 2)
    {
        cout << "Is A Prime No .";
    }
    return 0;
}