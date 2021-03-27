#include <iostream>
using namespace std;
int main()
{

    // char arr[100] = "Apple";
    // int i = 0;

    // while (arr[i] != '\0')
    // {
    //     cout << arr[i] << endl;
    // }

    int n;
    cin >> n;

    char arr[n + 1];
    cin >> arr;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = false;
            break;
        }
    }
    
    if (check)
        cout << "Word is Palindrome : " << endl;
    else
        cout << "Word is Not Palindrome : " << endl;

    return 0;
}