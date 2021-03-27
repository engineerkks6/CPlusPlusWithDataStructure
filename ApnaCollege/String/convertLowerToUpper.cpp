#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string str = "ndkfdksgkfsdb";

    // 97-65 = 32 places
    // cout << 'a' - 'A';

    // 1. CONVERT LOWER TO UPPER

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << "Into Upper Case : \n"
         << str << endl;

    // 2 .CONVERT UPPER TO LOWER

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    cout << "Into Lower Case :\n"
         << str << endl;

    // SHORTCOT TRICS TO CONVERTING AN STRING TO UPPER AND LOWER CASE

    string s = "kdfkhkhnfndfk";

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << "From ShortCort Tricks : \n"
         << s << endl;

    transform(s.begin(), s.end(), s.begin(), ::towlower);

    cout << "From Short Corts Tricks : \n"
         << s << endl;

    // Given An  Numeric String to makes the Greatest Number from its's Characters

    string nS = "36464535";

    sort(nS.begin(), nS.end(), greater<int>());

    cout << nS << endl;

    return 0;
}