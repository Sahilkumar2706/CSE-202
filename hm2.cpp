#include<iostream>
#include<string>
using namespace std;

main()
{
	int eq;
	int n,n1,n2,n3,n4;
	cout<<"equation:2s^4+2s^3+s^2+3s+2=0 \n";
	cout<<"enter the first coefficient of first column  : "<<endl;
	cin>>n;
	cout<<" the first coefficient of first column :"<<n<<endl;
	cout<<"enter the second coefficient of first column : "<<endl;
	cin>>n1;
	cout<<"the second coefficient of first column :"<<n1<<endl;
	cout<<"the third coefficient of first column : "<<endl;
	cin>>n2;
	cout<<"the third coefficient of first column :"<<n2<<endl;
	cout<<"the fourth coefficient of first column : "<<endl;
	cin>>n3;
	cout<<"the fourth coefficient of first column :"<<n3<<endl;
	cout<<"the fifth coefficient of first column : "<<endl;
	cin>>n4;
	cout<<"the fifth coefficient of first column :"<<n4<<endl;
	cout<<"enter the number of number :"<<endl;
	
	cin>>eq;
	if(eq<0)
	{
		cout<<"Given characterstics equation is unstable:";
	}
	else
	{
		cout<<"Given characterstics equation is stable:";
	}
	
	
	
	
	
}
