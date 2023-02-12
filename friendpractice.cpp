#include<iostream>
using namespace std;

class mean
{
	int a;
	int b;
	int c;
	friend void print(mean);
	public:
		void get()
		{
			cout<<"enter three num/n";
			cin>>a;
			cin>>b;
			cin>>c;
			
		}
		void sm()
		{
			int d= (a+b+c)/3;
			cout<<"\n the mean is"<<d<<endl;
			
		}
		 
};
void print(mean ob)
{

cout<<"a="<<ob.a<<endl;
cout<<"b="<<ob.b<<endl;
cout<<"c"<<ob.c<<endl;
}
int main()
{

mean s;
s.get();
print(s);
s.sm();
}


