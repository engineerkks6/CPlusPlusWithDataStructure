#include <iostream>
using namespace std;
int main()
{

    int n, k = 1;
    cout << "Enter the no Of Rows: \n";
    cin >> n;
 
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}