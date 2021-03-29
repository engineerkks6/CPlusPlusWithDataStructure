#include <iostream>
using namespace std;

// Function OverLoading
class FunctionOverLoading
{

public:
    void funcA()
    {
        cout << "I am Function With No Argumnet " << endl;
    }
    void funcA(int x)
    { // Function is overLoaded
        cout << "I am Function With Integer  Arguments" << endl;
    }
    void funcA(double x)
    { // Function is overLoaded
        cout << "I am Fuction with double argumnts" << endl;
    }
};
int main()
{
    FunctionOverLoading fobj;
    fobj.funcA();
    fobj.funcA(4);
    fobj.funcA(6.5);

    return 0;
}