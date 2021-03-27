#include "bits/stdc++.h"
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pcd = Previous Common Difference
    // Curl = current Length
    // arr[j] - arr[j - 1] = current common Difference
    int ans = 2;
    int pcd = arr[1] - arr[0];
    int curl = 2;
    int j = 2;

    while (j < n)
    {
        if (pcd == arr[j] - arr[j - 1])
        {
            curl++;
        }
        else
        {
            pcd = arr[j] - arr[j - 1];
            curl = 2;
        }

        ans = max(ans, curl);
        j++;
    }
    cout << "Ans = " << ans;
    return 0;
}