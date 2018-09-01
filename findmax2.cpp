//program to find the maximum of three numbers
//include library
#include<iostream>
using namespace std; 
//declare the main function
int main()
{
 //declare variables
 double a,b,c;
 //assigning of values
 cout<<"Please input the 1st value:"<<endl;
 cin>>a;
 cout<<"Please input the 2nd value:"<<endl;
 cin>>b;
 cout<<"Please input the 3rd value:"<<endl;
 cin>>c;
 //conditionals
 if(a>b)
 { 
   if(c>a)
    cout<<"The greatest number is "<<c<<endl;
   else
    cout<<"the greatest number is "<<a<<endl;
 }
 else
 { 
   if(c>b)
    cout<<"The greatest number is "<<c<<endl;
   else
    cout<<"the greatest number is "<<b<<endl;
 }
return 0;
}
   
