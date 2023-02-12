#include<iostream>
using namespace std;
main()
{

int number;
cout<<"Enter the value ";
cin>>number;
cout<<"The value is "<<number<<endl;
cout<<"The address of "<<&number<<endl;
number=10;
int  &n =number;
cout<<"The value of nmber= "<<number<<endl;
cout<<"The address of number= "<<&number<<endl;

cout<<"The value of n= "<<n<<endl;
cout<<"The address of n= "<<&n<<endl;
}
