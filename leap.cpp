//progam to find if the year is a leap year
#include<iostream>
using namespace std; 
//declare the main function
int main()
{
 //declare variables
 int a;
 //assigning of values
 cout<<"Please input the year value:"<<endl;
 cin>>a;
 //conditional
 if(a%400==0)
 {
   cout<<"The given year is a leap year"<<endl;
   return 0;
  }
 if(a%4==0 && a%100!=0)
   cout<<"The given year is a leap year"<<endl;
 else
   cout<<"The given year is not a leap year"<<endl;
 return 0;
}
   
