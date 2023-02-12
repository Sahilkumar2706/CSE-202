//pointer to data member
//1.pointer inside the class
#include<iostream>
using namespace std;
class vote
{
		int age;
		public:
			void getage()
			{
				int *pa=&age;//ponter to data member inside the class
				cout<<"\n Enter your age:";
				cin >> *pa;//cin>>age;
				
			}
		void status()
		{
			if(age>=18)
			{
				cout<<"\nwelcome you can vote";
			}
			else
			{
			
				cout<<"\nsorry,you are not eligible to vote";
			}
		}
};
main()
{
	cout<<"\t \tvoting eligibilty\n\n";
	vote v1;
	v1.getage();
	v1.status();
}
