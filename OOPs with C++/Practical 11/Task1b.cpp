#include <iostream>
using namespace std;
class A
{
public:
    void displayA()
    {
        cout << "Class A method called " << endl;
    }
};
class B : public A
{
public:
    void displayB()
    {
        cout << "Called class A method from class B method" << endl;
        displayA();
    }
};

int main()
{
    cout << "VIBHOR GOSWAMI , ID - 20011888 , Roll Num - 61\n";
    B obj;
    obj.displayA();
}