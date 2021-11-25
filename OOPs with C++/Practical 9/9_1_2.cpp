// Task-09-01B:
// Sourcecode:
#include<iostream>
#include<string>
using namespace std;
class student
{
private:
int rollno;
long int phoneno;
string name;
string address;
public:
void getdata();
void displaydata();
};
void student::getdata()
{
cout<<"Enter name:";
cin>>name;

cout<<"Enter rollno:";
cin>>rollno;
cout<<"Enter phoneno:";
cin>>phoneno;
cout<<"Enter address:";
cin>>address;
}
void student::displaydata()
{
cout<<"Name is"<<name<<endl;
cout<<"Rollno is:"<<rollno<<endl;
cout<<"phoneno is"<<phoneno<<endl;
cout<<"address is:"<<address<<endl;
}
int main()
{
student s1;
student s2;
s1.getdata();
s2.getdata();
cout<<"Student's data are:"<<endl;

s1.displaydata();
s2.displaydata();
}