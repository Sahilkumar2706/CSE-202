#include<iostream>
using namespace std;

class one
{
	int a;

	
	public:
		void get()
		{
			cout<<"enter two num \n";
			cin>>a;
		}
		friend class two;
			
			

		 
};
class two
{
	int b;
	public:
		void print(one ob)
		{
			cout<<"enter a num\n";
			cin>>b;
			cout<<endl;
			cout<<"a"<<ob.a<<endl;
			cout<<"b"<<b<<endl;
		}
		void sm(one ob)
		{
			int c= ob.a+b;
			cout<<endl<<"the sum is "<<c;
		}


};
int main()
{
	one o;
	two t;
	o.get();
	t.print(o);
	t.sm(o);
	
}



