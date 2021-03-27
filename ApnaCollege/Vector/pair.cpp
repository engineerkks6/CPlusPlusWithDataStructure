#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // pair<int, char> p;
    // p.first = 4;
    // p.second = 'f';

    bool myCompare(pair<int, int> p1, pair<int, int> p2)
    {
        return p1.first < p2.first;
    }

    int arr[9] = {10, 16, 7, 14, 5, 3, 2, 9};

    vector<pair<int, int>> v;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {

        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(), v.end(), myCompare);

    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}