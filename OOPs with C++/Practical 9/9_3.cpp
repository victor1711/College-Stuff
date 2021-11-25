#include<iostream>
using namespace std;
class area
{
int length,breadth,side;
public:
area (int s);
area(int l,int b);
};
area::area(int s)
{
this->side=s;
cout<<"The area of square is:"<<(side*side)<<endl;
}
area::area(int l,int b)
{
this->length=l;
this->breadth=b;

cout<<"The area of rectangle is:"<<(length*breadth)<<endl;
}
int main()
{
int s,l,b;
cout<<"Enter side of a square:";
cin>>s;
cout<<"Enter length and breadth of a rectangle:";
cin>>l>>b;
area a1=area(s);
area a2=area(l,b);