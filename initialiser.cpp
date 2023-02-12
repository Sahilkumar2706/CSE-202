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
		dfault(int x,int y,int z);
		
		
};
dfault::dfault(int x,int y,int z):a(x),b(y),c(z){}

main()
{
	dfault d(10,20,30);
	d.add();
	
}
