#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    cout << "sqrt = " << sqrt(n) << endl;
    for (int i = 2; i <= sqrt(n); i++)
    {
        cout << i << " - " << endl;
        if (n % i == 0)
        {
            cout << "Not Prime .";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime No ";
    }
    return 0;
}