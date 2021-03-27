#include <iostream>
#include <string>
using namespace std;

void reverseStrings(string s)
{

    if (s.length() == 0) //Base Case
    {
        return;
    }

    string restOfString = s.substr(1);
    reverseStrings(restOfString);
    cout << s[0];
}

int main()
{
    string str;
    cin >> str;
    cout << "Result\n";
    reverseStrings(str);
    return 0;
}