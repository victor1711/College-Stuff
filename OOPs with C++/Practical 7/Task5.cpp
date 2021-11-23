/*
Task-7.5 Store these in an array[4][4] in given fassion and then print:

	*

	* *

	* * *

	* * * *
*/    

#include<iostream>
using namespace std;

int main()
{
    char A[4][4];
    int i,j;
    
   
    for(i=0;i<4;i++)
    {
         for(j=0;j<4;j++)
         {
            A[i][j]='*';
         }
    }
    
    cout<<endl; 
    
    for(i=0;i<4;i++)
    {
         for(j=0;j<=i;j++)
         {
             cout<<A[i][j]<<" ";
         }
         cout<<endl;
    }
    
    return 0;
    
}