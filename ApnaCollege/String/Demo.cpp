#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()
{

    // string str = "Ayush Kumar";

    // string str1;

    // cout << "Enter the Sentence \n";
    // getline(cin, str1);

    string s1 = "Family";
    string s2 = "Falm";

    // // cout << s1 + s2;
    // cout << s1.append(s2);

    // cout << s1 << endl;
    // cout << s1[2];

    // cout << s1.compare(s2);

    // if (s1.compare(s2) == 0)
    //     cout << "Strings are equal ";

    // cout << s1.find("il") << endl;

    // string s3 = "HelooAyush";

    // cout << s3.substr(3, 3) << endl;

    // String To Integer
    string s4 = "321";

    int x = stoi(s4);

    cout << x + 2 << endl;

    // Integer to String

    int y = 345;

    string z = to_string(y);
    cout << z + "7" << endl;

    // Sorting string

    string s6 = "dgfdjhgkhjdfakvkdzokod";

    sort(s6.begin(), s6.end());

    cout << s6 << endl;

    return 0;
}