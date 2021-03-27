#include <iostream>
using namespace std;
int main()
{

    int n, a = 0, b = 1, ans = 0;

    cout << "ENter The nth term to get Fibonacci Series : \n";
    cin >> n;

    cout << a << " ";
    cout << b << " ";
    for (int i = 2; i < n; i++)
    {
        ans = a + b;
        cout << ans << " ";
        a = b;
        b = ans;
    }

    return 0;
}