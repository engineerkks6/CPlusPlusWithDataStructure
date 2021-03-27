#include <iostream>
using namespace std;

class A
{

public:
    int a;
    void funA()
    {
        cout << "public function called .\n";
    }

private:
    int b;
    void funB()
    {
        cout << "private function called\n";
    }

protected:
    int c;
    void funC()
    {
        cout << "protected function called\n";
    }
};

int main()
{
    A obj;
    // obj.funB();
    obj.funA();
    // obj.func();  you can not access out side the class because of it is declared as protected 

    return 0;
}