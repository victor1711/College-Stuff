/*
Task-7.4 Restore the same values in the same array, arr[3][3]:

	  1 2 3		1 1 1

          4 5 6     ==> 2 2 2

	  7 8 9		3 3 3  

  v1. Use row loop [int i, for all j]

  v2. Use arr[i][N-1]/3, at each place

  v3. Use, arr[i][j]-(2*i+j)
*/  

#include<iostream>
using namespace std;

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    cout<<"\nMatrix A"<<endl;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cout<<a[i][j]<<" ";
        
        cout<<endl;
    }
    
    cout<<"\nRestore array A"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=a[i][j] - (2*i+j);
            cout<<a[i][j]<<" ";
        }
        
        
        cout<<endl;
    }
    
    cout<<a[2][1];
    
    return 0;
 
}
