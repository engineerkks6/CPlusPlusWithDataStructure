#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of Array :\n";
    cin >> n;

    int arr[n];
    
    cout << "Enter the Elemnets:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // For Printing all Elemnets
    cout << "Your Sorted Element in Array using selectionSort is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}