/*Task1: What happens if we add integer with a string, 
how the compiler would react to it?

String str = "ABC";
Int a = 1;
String str2 = str + a;*/

#include<iostream>
#include<string>

using namespace std;
int main()
{
   string str="abcd";
   int a=10;
   string str2= str + a;
   
   cout<<"\n Add string is: "<<str2;
   
   return 0;
}