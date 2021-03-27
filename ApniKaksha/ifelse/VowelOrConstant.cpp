#include <iostream>
using namespace std;
int main()
{

    char c;
    int isLowerVowel, isUpperVowel;
    cout << "Enter the alphabet:" << endl;
    cin >> c;

    isUpperVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    isLowerVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    if (isLowerVowel || isUpperVowel)
    {
        cout << c << " is Vowel  : ";
    }
    else
    {
        cout << c << " is Constant :";
    }

    return 0;
}