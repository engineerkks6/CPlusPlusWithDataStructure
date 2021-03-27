#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the Number: ";
    cin >> n;
    if (n % 2 == 0)
    {

        cout << "Number is Even =" << n << endl;
    }
    else
    {
        cout << "Number is Odd  = " << n;
    }

    return 0;
}