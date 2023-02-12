//class: casting operator in the source class
#include<iostream>
#include<string>
using namespace std;

class employee;

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
	operator employee();		
};

class employee
{
	public:
		int e_id;
		void print()
		{
			cout<<"\nYour Employee ID is: "<<e_id;
		}
};

student::operator employee()
{
	employee ob;
	if(cgpa>7.0f)
	{
		ob.e_id=reg_no;
	}
	else
	{
		cout<<"\nYou are not elegible";
	}
	return(ob);
	
}
main()
{
	student s1;
	s1.get();
	
	employee e1;
	
	e1=s1;//class to class
	e1.print();
}
