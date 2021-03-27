// Program to check the triangle is 1 . scalene , isosceles or equileteral .
#include <iostream>
using namespace std;
int main()
{

    int sidea, sideb, sidec;

    cout << "Enter the three side of triangle : " << endl;
    cin >> sidea >> sideb >> sidec;

    if (sidea == sideb && sideb == sidec)
    {
        cout << "The Triangle is equiletral : " << endl;
    }
    else if (sidea == sideb || sidea == sidec || sideb == sidec)
    {
        cout << "The  Triangle is isosceles : " << endl;
    }
    else
    {
        cout << "The triangle is scalene : ";
    }

    return 0;
}