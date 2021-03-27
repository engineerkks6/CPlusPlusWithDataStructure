#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int lastdigit = n % 10;
        ans += lastdigit * x;
        x *= 2;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;

    cout << binaryToDecimal(n);

    return 0;
}