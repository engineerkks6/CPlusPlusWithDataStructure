#include "bits/stdc++.h"
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
    const int N = 1e6 + 2;

    bool check[N]; //One Another Boolean /type aArray Declared initialised it with false
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = true;
        }
    }

    int ans = -1;

    for (int i = 0; i < N; i++) // Now itrate boolean type array
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }

    cout << "Your answer is =" << ans;

    return 0;
}