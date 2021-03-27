#include <iostream>
using namespace std;

int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1; //it is basically 2 tuti power 0 or 1,2,3....
    while (n > 0)
    {
        int lastdigit = n % 10;

        ans += lastdigit * x;
        x *= 8;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;

    cout << octalToDecimal(n);
}