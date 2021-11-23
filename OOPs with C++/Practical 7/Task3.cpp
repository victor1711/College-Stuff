/*
v1. Print using reverse method:

  1 2 3 		9 8 7

  4 5 6  ==>    6 5 4

  7 8 9             3 2 1

   

  v2. Print using (10- arr[i][j])  method:

  1 2 3 		9 8 7

  4 5 6  ==>    6 5 4

  7 8 9             3 2 1

  

  v3. Restore using reverse method [without creating new array]:

  1 2 3 		9 8 7

  4 5 6  ==>    6 5 4

  7 8 9             3 2 1

  

  v4. Restore using (10- arr[i][j]) method [without creating new array]:

  1 2 3 		9 8 7

  4 5 6  ==>    6 5 4

  7 8 9              3 2 1

*/

// Practical 7 task 3 version 1

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
    
    cout<<"\nReversed array A"<<endl;
    for(i=2;i>=0;i--)
    {
        for(j=2;j>=0;j--)
           cout<<a[i][j]<<" ";
        
        cout<<endl;
        
    }
    
    return 0;
    
}

// Practical 7 task 3 version 2
#include<iostream>
using namespace std;

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    
    cout<<"\nArray A"<<endl;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cout<<a[i][j]<<" ";
        
        cout<<endl;
    }
    
    cout<<"\nRerversed array"<<endl;
    
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
           cout<<(10-a[i][j])<<" ";;
       
       cout<<endl;
    }
    
    return 0;
    
}  

// Practical 7 task 3 version 3
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
    
    cout<<"\nReversed array A"<<endl;
    for(i=2;i>=0;i--)
    {
        for(j=2;j>=0;j--)
           cout<<a[i][j]<<" ";
        
        cout<<endl;
        
    }
    
    return 0;
    
}

// Practical 7 task 3 version 4

#include<iostream>
using namespace std;

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    
    cout<<"\nArray A"<<endl;
    
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
           a[i][j]=(10-a[i][j]);
           
           cout<<a[i][j]<<" ";
           
       }
       
       cout<<endl;
       
    }
    
    cout<<"\nElements a[2][0] after restore value: "<<a[2][0]<<endl;
    
    return 0;
    
}
