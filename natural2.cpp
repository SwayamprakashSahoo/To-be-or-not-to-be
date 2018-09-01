//program to print all natural numbers from 1 to n as input by the user in reverse
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
 int i=n;
 cout<<"The natural numbers from 1 to "<<n<<" in reverse are"<<endl;
 while(i>=1)//looping
 { 
   cout<<i<<endl;
   i--;
  }
 return 0;
}
