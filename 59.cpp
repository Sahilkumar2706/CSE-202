//overload  prefix++ operator (unary). operator finction is the member function
#include<iostream>
using namespace std;

class rgister
{
	int count;
	public:
		number()
		{
			cout<<"Enter a positive nuber: "<<n;
			cin>>n;
		}
		void operator --() //mem fun 
		{
			n=(-n);
		}
		void print ()
		{
			cout<<"The Negative number is"<<n<<endl;
			
		}
};
main()
{
	number  ob;
	++ob; //ob.operator++();
	ob.print();
}

