#include<iostream>
using namespace std;

namespace first
{
   int add(int a,int b)
   {
     return (a+b);
   }
}

namespace second
{
   float add(float a,float b)
   {
      return (a+b);
   }
}

using namespace first;

int main()
{
   cout<<"\naddition of two is: "<<add(3,4.7f);
   
   return 0;
}