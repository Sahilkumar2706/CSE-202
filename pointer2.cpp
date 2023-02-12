
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
	int n;
	cout<<"Enter the number of people:";
	cin>>n;
	
	vote v[n];//array of objects
	int i;
	
	for(i=0; i<n; i++)
	{
		v[i].getage();
	v[i].status();
	}
	
}
