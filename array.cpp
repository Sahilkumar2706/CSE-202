#include<iostream>
using namespace std;
class student
{
	int reg_no;
int m[5];
public:
	void get()
	{
		cout<<"enter the reg no";
		cin>>reg_no;
		cout<<"enter the marks of 5 sub:\n";
		int i;
		for(i=0;i<5;i++)
		{
			cout<<"sub"<<i+1<<":";
			cin>>m[i];
		}
	}
	void print()
	{
		cout<<"reg no"<<reg_no<<endl;
		int i;
		for(i=0;i<5;i++)
		{
			cout<<"sub"<<i+1<<":";
			cin>>m[i];
		}
	}
};
main()
{

student s;
s.get();
s.print();
}
