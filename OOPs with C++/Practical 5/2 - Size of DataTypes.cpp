#include<iostream>
using namespace std;

int main()
{
    int a=23;
    char ch='A';
    float b=27.33;
    double c=12.56934576;
    short int x=23;
    bool cond=false;
    long int y=2487655;
    long double z= 2308666.2220436;
    wchar_t i=L'D';
    
    cout<<"\n SIZE OF DATA TYPES"<<endl;
    
    cout<<"Int= "<<sizeof(int)<<" bytes"<<endl;      
    cout<<"Char= "<<sizeof(char)<<" bytes"<<endl;       
    cout<<"Float= "<<sizeof(float)<<" bytes"<<endl;      
    cout<<"Double= "<<sizeof(double)<<" bytes"<<endl;     
    cout<<"Short= "<<sizeof(short)<<" bytes"<<endl;      
    cout<<"Boolean= "<<sizeof(bool)<<" bytes"<<endl;       
    cout<<"Long= "<<sizeof(long)<<" bytes"<<endl;        
    cout<<"Long Double= "<<sizeof(long double)<<" bytes"<<endl;
    cout<<"Wide character= "<<sizeof(wchar_t)<<" bytes\n\n"<<endl;

    return 0;
  
}