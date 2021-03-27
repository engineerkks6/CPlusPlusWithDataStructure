/*
    Check if there exist two elemnts in an array such that their sum is equal to given k
*/

#include <iostream>
#include <climits>
using namespace std;

// 1.) Brute Force Approach Time Complextiy = O(n^2)
// bool pairSum(int arr[], int n, int k)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == k)
//             {

//                 cout << i << " " << j << endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// Optimized Solution Time Complextiy = O(n)
// Codition = need Sorted Array

bool pairSum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    int n = 8;

    cout << pairSum(arr, n, k);

    return 0;
}