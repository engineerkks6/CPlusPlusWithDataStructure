#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << "Through Simple for loop " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " \n";
    } //1 2 3

    cout << "Through iterator " << endl;
    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    } //1 2 3

    cout << "Through Auto " << endl;
    for (auto element : v)
    {
        cout << element << endl;
    }

    cout << "Pop Back \n";
    v.pop_back(); //top element is poped

    cout << "Swap to vector v to vector v1" << endl;

    vector<int> v1(3, 40);

    swap(v, v1);

    cout << "After swapping element of v " << endl;
    for (auto element : v)
    {
        cout << element << endl;
    }

    cout << "After swapping element of v1 " << endl;
    for (auto element : v1)
    {
        cout << element << endl;
    }

    return 0;
}