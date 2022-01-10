#include<iostream>
#include<fstream>
#include<string>
using namespace std ;
int main()
{
	fstream myfile;
	myfile.open("text1.txt");
	myfile<< "Practical 15 task 2b writing in a file using fstream";
	myfile.close();
	return 0;
}
