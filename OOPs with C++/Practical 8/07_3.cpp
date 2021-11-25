#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
int main()
{
int a,b;
cin>>a>>b;
cout<<"Before swapping\na & b: "<<a<<" "<<b<<endl;
swap(&a,&b);
cout<<"After swapping\na & b: "<<a<<" "<<b<<endl;
}