#include <iostream>
#include <climits>
using namespace std;
int main()
{

    /**********************************
1) BRUTE FORCE APPROCH ->>>>TIME- COMPLEXCITY = O(N^3)
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                // cout << a[k] << " ";
                sum += a[k];
            }
            // cout << endl;
            maxSum = max(maxSum, sum);
        }
    }

    cout << maxSum;
***************************************/

    //  OptiMized Solution Time Compexcity = o(n^2)
    /* int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int currentSum[n+1];
    currentSum[0] =0;

    for(int i=1; i<=n; i++)
    {
        currentSum[i] = currentSum[i-1]+a[i-1];
    }
 
    int maxSum=INT_MIN;

    for(int i=1; i<=n;i++)
    {
        int sum=0;
        for(int j=0; j<i; j++)
        {
            sum = currentSum[i] - currentSum[j];
            maxSum = max(maxSum,sum);
        }
    }

    cout<<maxSum;
 **************************************************************/

    //Using Kaden's Algorithm TimeCokplexcity = O(n)

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += a[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum;

    return 0;
}