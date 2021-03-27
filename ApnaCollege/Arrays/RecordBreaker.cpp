#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = -1;
    // cout << a[n] << endl;  for testing purpose

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int mx = -1;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << "Total No Of Record Breaking Days : " << ans << endl;

    return 0;
}