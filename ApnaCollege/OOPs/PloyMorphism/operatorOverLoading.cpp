#include <iostream>

using namespace std;
// Operator OverLoading

class Complex
{
private:
    int real, imagenary;

public:
    // Constructor
    Complex(int r = 0, int imag = 0)
    {
        real = r;
        imagenary = imag;
    }

    // + operator is Overloded
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imagenary = imagenary + obj.imagenary;
        return res;
    }

    void display()
    {
        cout << real << " + i" << imagenary << endl;
    }
};
int main()
{
    Complex obj1(12, 7);
    Complex obj2(5, 7);

    Complex obj3 = obj1 + obj2;
    obj3.display();

    return 0;
}