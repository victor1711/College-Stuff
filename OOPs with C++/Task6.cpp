/* Task6: Check if string is mutable in C++ or not?
String a = "Hello";
Cout << &a;
a[0] = 'J';
Cout << &a;
Cout << a;

What is the output? */



#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str="GEHU";
    cout<<&str<<endl;
    
    str[0]='J';
    cout<<&str<<endl;
    
    cout<<str<<endl;
    return 0;
    
}