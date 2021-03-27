//Using Functions

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int a, b;
    cin >> a >> b;
    cout << "Prime NO Between " << a << " And " << b << " : " << endl;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}