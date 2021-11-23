/* 
Task-7.2 Create a switch statement [Using ctime], In Which:

  a. When you pass 1 your program would print current year
  b. When you pass 2 your program would print current month
  c. When you pass 3 your program would print current day
  d. When you pass 4 your program would print Not applicable
*/  
#include<iostream>
#include<ctime>
using namespace std;

int main()

{
     int ch;
     time_t now=time(0);
     
     tm *dmy=localtime(&now);
     cout<<"\nEnter your choice: ";
     cin>>ch;
     
     switch(ch)
     {
        case 1: 
           cout<<"\nCurrent Year: "<<1900 + dmy->tm_year<<endl;
           break;
        
        case 2:
            cout<<"\nCurrent Month: "<<1 + dmy->tm_mon<<endl;
            break;
            
        case 3:
             cout<<"\nCurrent Day: "<< dmy->tm_wday<<endl;
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
