#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int *aptr;
    aptr = &a;

    cout << aptr << endl;
    cout << *aptr << endl;
    *aptr = 20;
    cout << aptr << endl;
    cout << *aptr << endl;

    cout << " // 2) POINTER AND ARRAY" << endl
         << endl;
    // 2) POINTER AND ARRAY

    int arr[] = {10, 20, 30};
    cout << *arr << endl;

    int *ptr = arr;

    cout << "ptr=" << ptr << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    cout << "Using arr " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << endl;
        // arr++;
    }

    return 0;
}