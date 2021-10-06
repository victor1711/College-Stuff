// VIBHOR GOSWAMI.
//USING :: SRO
#include <iostream>
using namespace std;

namespace first
{
    int add(int a, int b)
    {
        return (a + b);
    }
}

namespace second
{
    float add(float a, float b)
    {
        return (a + b);
    }
}

int main()
{
    int sum;
    float a;
    sum = first::add(3, 3);
    a = second::add(3.6, 7.8);

    cout << "\nSum is: " << sum;
    cout << "\nADD is: " << a;
    return 0;
}
