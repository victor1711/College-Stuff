/*Task2: Check the entered string is Palindrome or not?

String str = "75457"
Output: Yes it is a palindrome or No it is not a Palindrome. 

(Use, getline(sin, str1) and reverse_iterator of string to check this)
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
   string str;
   int i=0,flag=1;
   
   cout<<"\nEnter the string: "<<endl;
   getline(cin,str);
   
   string line;
   
   cout<<"\nReverse of string is: ";
   string::reverse_iterator rev;
   for(rev=str.rbegin();rev!=str.rend();rev++)
   {
        cout<<*rev;
        
        line[i]=*rev;
        i++;
   }
   
   int n=i;
   line[i+1]='\0';
   
   for(i=0;i<n/2;i++)
   {
        
        if(line[i]!=str[i])
        {
             flag=0;
             break;
        }
    }
    
   if(flag==1)
      cout<<"\nString is palindrome"<<endl;
   else
      cout<<"\nString is not palindrome"<<endl;
        
   return 0;
   
}