//Use of getline function()

#include <iostream>
#define Name 20
using namespace std;
int main()
{
    char n[20];
    cout << "Enter your name: " << endl;

    cin.getline(n, 20);
    cout << "Name is :" << n << endl;
    return 0;
}
