#include<iostream>
using namespace std;

class dfault
{
	int a,b,c;
	public:
		void add()
		{
			cout<<"Sum is "<<a+b+c<<endl;
		}
		dfault(int x=25,int y=50,int z=100)
		{
			a=x;
			b=y;
			c=z;
		}
};
main()
{
	dfault d(10,20,30);
	d.add();
	cout<<endl;
	dfault d1(10,20);
	d1.add();
	dfault d2(10);
	d2.add();
	cout<<endl;
	dfault d3;
	d3.add();
}
