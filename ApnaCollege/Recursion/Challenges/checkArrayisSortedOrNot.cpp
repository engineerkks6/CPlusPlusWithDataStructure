#include <iostream>
using namespace std;

bool sortedArray(int arr[], int n)
{
    if (n == 1)
        return 1;
    bool prevSortedArray = sortedArray(arr + 1, n - 1);
    return (arr[0] < arr[1] && prevSortedArray);
}

int main()
{

    int arr[] = {1, 2, 6, 4, 5};
    cout << sortedArray(arr, 5);
    return 0;
}