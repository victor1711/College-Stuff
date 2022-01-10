#include <iostream>
using namespace std;
class A
{
public:
    void displayA()
    {
        cout << "Class A Method called " << endl;
    }
};
class B : protected A
{
public:
    void displayB()
    {
        cout << "Calling class A method from class B method" << endl;
        displayA();
    }
};
int main()
{
    cout <<"VIBHOR GOSWAMI , ID - 20011888 , Roll Num - 61\n";
    B obj;
    obj.displayB();
}