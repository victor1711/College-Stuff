/*Task4: String Compare: Check if the strings are equal or not?
 (do not use str1.compare(str2), do it manually) */

#include<iostream>
#include<string>

using namespace std;

int main()
{
     string str1="ABCD";
     string str2="ABCD";
     string str3="GEU";
     string str4="GEHU";
     
     if(str1==str2)
        cout<<"\n String 1 and String 2 is equal";
     else
        cout<<"\n String 1 and String 2 is not equal";
      
     if(str3==str4)
        cout<<"\n String 3 and String 3 is equal";
     else 
        cout<<"\n String 3 and String 4 is not equal\n";
       
     return 0;
     
}