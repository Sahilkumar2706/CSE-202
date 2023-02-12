//class to class
#include<iostream>
#include<string>
using namespace std;

class student
{
	int reg_no;
	float cgpa;
	public:
		void get()
		{
			cout<<"Enter your registration number: ";
			cin>>reg_no;
			cout<<"Enter your cgap: ";
			cin>>cgpa;
		}
		int number()
		{
			return(reg_no);
		}
		float marks()
		{
			return(cgpa);
		}
		
};

class employee
{
	int e_id;
	public:
		employee()
		{
			
		}
		employee(student &ob)
		{
			if(ob.marks()>7.0f)
			{
				e_id=ob.number();
				print();
			}
			else
			{
				cout<<"\nYou are not elegible";
			}
		}
		void print()
		{
			cout<<"\nYour Employee ID is: "<<e_id;
		}
};

main()
{
	student s1;
	s1.get();
	
	employee e1;
	
	e1=s1;//class to class
}
