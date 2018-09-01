//program to print all natural numbers from 1 to n as input by the user
//include library
#include<iostream>
using namespace std; 
//declare the main function
int main()
{
 //declare variables
 int n;
 cout<<"please input a value"<<endl;
 cin>>n;
 int i=1;
 cout<<"The natural numbers from 1 to "<<n<<" are"<<endl;
 while(i<=n)//looping
 { 
   cout<<i<<endl;
   i++;
  }
 return 0;
}
