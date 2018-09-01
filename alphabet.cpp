//program to find if the input character is an alphabet
//include library
#include<iostream>
using namespace std; 
//declare the main function
int main()
{
 //declare variables
 char a;
 //assigning of values
 cout<<"Please input the character you want"<<endl;
 cin>>a;
 //conditionals
 if((a>='a'&& a<='z')||(a>='A'&& a<='Z')) 
  cout<<"The given character is an alphabet"<<endl;
 else
  cout<<"The given character is not an alphabet"<<endl;
 return 0;
}

