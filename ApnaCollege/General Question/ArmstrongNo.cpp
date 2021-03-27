#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int n, sum = 0;
    cout << "Enter the No to check Armstrong : \n";
    cin >> n;
    int orignal = n;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n /= 10;
    }

    if (sum == orignal)
    {
        cout << "Armstrong No : ";
    }
    else
    {
        cout << "Not Armstrong No";
    }

    return 0;
}