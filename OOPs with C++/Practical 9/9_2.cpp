// Task-09-02:
// Sourcecode:
#include<iostream>
using namespace std;
class test
{
private:
static int count;
public:
test()
{
count++;
}
static int objcount()
{
return count;
}
};
int test::count;
int main()

{
test obj1,obj2,obj3;
int cnt;
cnt=test::objcount();
cout<<"Number of objects:"<<cnt;
}