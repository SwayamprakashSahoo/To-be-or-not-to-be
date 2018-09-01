//program to print all odd numbers from 1 to 100 using while loop
//include library
#include<iostream>
using namespace std; 
//declare the main function
int main()
{
 //declare variables
 int i=1;

 cout<<"The odd numbers from 1 to 100 are"<<endl;
 while((i<=100))//looping
 { 
   if(i%2!=0)//condition for even number
    cout<<i<<endl;
   i++;
  }
 return 0;
}
