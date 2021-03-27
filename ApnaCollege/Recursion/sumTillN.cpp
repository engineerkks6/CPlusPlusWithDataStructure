#include <iostream>
using namespace std;

int sumTillN(int n)
{
    if (n == 0)
        return 0;
    int prevSum = sumTillN(n - 1);
    return n + prevSum;
}
int main()
{

    int n;
    cout << "Enter the Value of n: " << endl;
    cin >> n;

    cout << sumTillN(n);

    return 0;
}