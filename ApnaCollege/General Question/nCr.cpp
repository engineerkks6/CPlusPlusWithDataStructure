#include <iostream>
using namespace std;

//Declared Function
int fact(int n);

int main()
{
    int n, r;
    cout << "Enter the value of n and r to Calculate nCr : \n";
    cin >> n >> r;

    int ans = fact(n) / (fact(r) * fact(n - r));

    cout << "nCr = " << ans;
    return 0;
}

int fact(int n)
{
    int factorial = 1;
    int i = 2;
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    return factorial;
}