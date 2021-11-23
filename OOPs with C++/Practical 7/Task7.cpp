/*
Task-7.7 Store these in an array[4][4] in given fashion and then print:

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
     
     for(i=3;i>=0;i--)
     {
        for(j=0;j<=3;j++)     
        {
           if(j>=i)
              cout<<A[i][j];
           else 
              cout<<" ";
        }
        
        cout<<endl;
     }
     
     
     return 0;
     
     
}
