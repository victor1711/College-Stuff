/*
  Task-7.1 Create a switch statement [Manual], In Which:

  a. When you pass 1 your program would print current year
  b. When you pass 2 your program would print current month
  c. When you pass 3 your program would print current day
  d. When you pass 4 your program would print Not applicable
*/


#include<iostream>
#include<string>
using namespace std;

int main()
{
    int ch;
    
    cout<<"\nEnter your choice: ";
    cin>>ch;
    
    switch(ch)
    {
         case 1:
                cout<<"\nCurrent year: 2021"<<endl;
                break;
         
         case 2:
                cout<<"\nCurrent month: October"<<endl;
                break;
             
         case 3:
                cout<<"\nCurrent day: Thrusday"<<endl;
                break;
             
         case 4:
                cout<<"\nNot Applicable"<<endl;
                break;
         
         default:
              cout<<"\nWrong choice"<<endl;
              break;
         
      }
      
      return 0;
      
}