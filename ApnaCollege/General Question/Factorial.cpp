#include <iostream>
using namespace std;

int fact(int n)
{

    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;
    cout << "Enter The Number  to Get Factorial : \n";
    cin >> n;
    int ans = fact(n);

    cout << "Your Factorial is : " << ans;
    return 0;
}