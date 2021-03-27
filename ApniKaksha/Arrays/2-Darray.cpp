#include <iostream>
using namespace std;
int main()
{

    int arr[2][2];

    cout << "Enter the elements of araay :  \n";

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Your Elements are : \n";

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}