#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    int b;
    protected:
    int c;
};
class B:protected A{
   
    public:
    void display(){
        b=10;
        c=15;
        cout<<"b="<<b<<endl<<"c="<<c;
    }
};
int main(){
    B obj;
    obj.display();
}
