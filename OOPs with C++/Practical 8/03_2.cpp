#include<iostream>
int main()
{
int a=10;
int *p;
int **q;
p=&a;
q=&p;
std::cout<<**q<<std::endl;
int b=20;
**q=b;
std::cout<<**q<<std::endl;
}