#include <iostream>
using namespace std;
class MarrineAnimals
{
public:
    void displayMA()
    {
        cout << "I am Marrine Animal" << endl;
    }
};
class Mammals
{

public:
    void displayM()
    {
        cout << "I am Mammal" << endl;
    }
};
class BlueWhale : public MarrineAnimals, public Mammals
{

public:
    void displayB()
    {
        cout << "I belong to both categories Mammals as well as Marine Animals" << endl;
    }
};
int main()
{
    cout << "VIBHOR GOSWAMI , ID - 20011888 , Roll Num - 61\n";
    Mammals ob1;
    MarrineAnimals ob2;
    BlueWhale ob3;
    ob1.displayM();
    ob2.displayMA();
    ob3.displayB();
    ob3.displayM();
    ob3.displayMA();
}