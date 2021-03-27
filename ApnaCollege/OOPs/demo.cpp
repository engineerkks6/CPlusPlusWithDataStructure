#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    student()
    {
        cout << "Default Constructor Called ";
    } //Default constructor

    student(string s, int a, bool gen)
    {
        cout << "\nParameterised Constructor Called " << endl;
        name = s;
        age = a;
        gender = gen;

        cout << name << " " << age << " " << gender << endl;
    } //Parameterised Consructor

    student(student &b)
    {
        cout << " Copy Constructor Called " << endl;
        name = b.name;
        age = b.age;
        gender = b.gender;
        cout << name << " " << age << " " << gender << endl;

    } //Copy Constructor

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }

    ~student()
    {
        cout << " Destructor Called ";
    }
};

int main()
{

    // student a;
    // a.name = "Ayush";
    // a.age = 19;
    // a.gender = 0;

    // cout << a.name << endl;

    student a;                  // default Construcor Must be Called
    student b("Vikash", 23, 0); // Parameterised Construcor Must be Called
    student d("Ayush", 13, 0);  // Parameterised Construcor Must be Called
    student c = b;              //Copy Constructor Must beCalled

    if (c == d)
    {
        cout << " same";
    }
    else
    {
        cout << " Not Same";
    }

    return 0;
}