#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    cout << "Enter the element of array : \n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Your arrays's Elen=ments are : \n";
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i];
    }
}
