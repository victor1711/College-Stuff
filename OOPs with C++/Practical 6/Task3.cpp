/*Task3: Make a reverse of a string using reverse method and 
reverse_iterator of string class? */

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    
    cout<<"\nBy reverse_iterator"<<endl;
    
    cout<<"Reverse of string is: ";
    
    for(string::reverse_iterator ptr=str.rbegin();ptr!=str.rend();ptr++)
    {
        cout<<*ptr;    
    }
    
   cout<<"\nBy reverse method"<<endl;
   
   reverse(str.begin(),str.end());
   
   cout<<"Reverse of string is: "<<str<<endl;
   
   return 0;
   
}