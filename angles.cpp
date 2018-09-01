//program to find the validity of the triangle based on the angles input by the user
//include library
#include<iostream>
using namespace std; 
//declare the main function
int main()
{
 //declare variables
 double a,b,c;
 cout<<"please input the 1st angle"<<endl;
 cin>>a;
 cout<<"please input the 2nd angle"<<endl;
 cin>>b;
 cout<<"please input the 3rd angle"<<endl;
 cin>>c;
 double d=a+b+c;
 //the process
 if((a!=0)&&(b!=0)&&(c!=0))
  {
   if(d!=180)
    cout<<"The triangle is invalid as the angles do not add up to 180 degrees"<<endl;
   else 
    cout<<"The triangle is valid"<<endl;
   return 0;
  } 
 else
 cout<<"The triangle is invalid as one of the angles is zero"<<endl;
 return 0;
}

