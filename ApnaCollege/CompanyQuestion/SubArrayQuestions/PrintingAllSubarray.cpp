#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) //For Starting index
    {
        for (int j = i; j < n; j++) //For Ending Index
        {
            for (int k = i; k <= j; k++) //Printing Elemnt from Starting Index to ending Index
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}