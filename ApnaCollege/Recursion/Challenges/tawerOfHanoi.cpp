#include <iostream>
using namespace std;

void tawerOfHanoi(int n, char src, char dest, char helper)
{

    if (n == 0)
    {
        return;
    }
    tawerOfHanoi(n - 1, src, helper, dest);
    cout << "Move From " << src << " to " << dest << endl;
    tawerOfHanoi(n - 1, helper, dest, src);
}

int main()
{
    tawerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}