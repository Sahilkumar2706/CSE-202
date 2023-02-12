#include<iostream>
using namespace std;

class add
{
	int a;
	int b;
	friend void print(add);
	public:
		void get()
		{
			cout<<"enter two num/n";
			cin>>a;
			cin>>b;
			
		}
		void sm()
		{
			int c= a+b;
			cout<<"\n the sum is"<<c<<endl;
			
		}
		 
};
void print(add ob)
{

cout<<"a="<<ob.a<<endl;
cout<<"b="<<ob.b<<endl;
}
int main()
{

add s;
s.get();
print(s);
s.sm();
}

