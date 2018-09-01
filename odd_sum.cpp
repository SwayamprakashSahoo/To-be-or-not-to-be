//program to print the sum of all odd numbers from 1 to n as input by the user
//include library
#include<iostream>
using namespace std; 
//declare the main function
int main()
{
 //declare variables
 int n,a=0;

 cout<<"please input a numeric value"<<endl;
 cin>>n;
 int i=1;

 while((i<=n))//looping
 { 
   if(i%2!=0)//condition for even number
    a=a+i;
   i++;
  }
 cout<<"The sum of all odd numbers from 1 to "<<n<<" is "<<a<<endl;
 return 0;
}
