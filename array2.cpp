#include<iostream>
using namespace std;
class vote
{
	int age;
	public:
		void getage()
		{
		
			cout<<"emter your age";
			cin>>age;
		}
		void status()
		{
			if(age>=18)
			{
				cout<<"welcome you can vote";
			}
			else
			{
			
				cout<<"\nsorry,you are not eligible to vote";'
			}
		}
};
main()
{
	cout<<"\t voting eligibilty";
	vote v1;
	v1.getage();
	v1.status();
}
