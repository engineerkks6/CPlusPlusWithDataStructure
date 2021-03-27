#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int currLen = 0;
    int maxLen = 0;
    int i = 0;
    int startIndex = 0;
    int maxIndex = 0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxIndex = startIndex;
            }
            currLen = 0;
            startIndex = i + 1;
        }

        else
            currLen++;

        if (arr[i] == '\0')
        {
            break;
        }

        i++;
    }
    cout << maxLen << endl;

    for (int i = 0; i < maxLen; i++)
        cout << arr[i + maxIndex];
    return 0;
}