// Using namespace.
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

//using namespace first;
using namespace second;

int main()
{
    // cout << "\nSum is: " << add(3, 3);

    // cout << "\nADD is: " << add(3.6, 7.8) << endl;

    cout<<"\naddition of two is: "<<add(3,4.7f);

    return 0;
}