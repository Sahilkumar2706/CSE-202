#include<iostream>

using namespace std;

class employee
{
	
		char name;
		
		int e_id;
		char designation;
		public:
		
		void getdata()
		{
			cout<<"Enter the name: "<<name<<endl;
			cin>>name;
			cout<<"Enter the e_id: "<<e_id<<endl;
			cin>>e_id;
			cout<<"Enter the designation: "<<designation<<endl;
			cin>>designation;
		}
		void putdata()
		{
			cout<<"name: "<<name<<endl;
			cout<<"employee id: "<<e_id<<endl;
			cout<<"designation: "<<designation<<endl;
		}

	
};

class salary : public employee
{
	public:
	int basic_pay;
	int allowances;
	int sum;

		
			void get()
			{
			
			cout<<"Enter the basic pay: "<<endl;
			cin>>basic_pay;
			cout<<"Enter the allowances: "<<endl;
			cin>>allowances;
		}
		void sm()
		{
			sum= basic_pay+allowances;
		}
		void set()
		{
			cout<<"the basic pay "<<basic_pay<<endl;
			cout<<"allowances "<<allowances<<endl;
			cout<<"sum "<<sum<<endl;
			
		}
		void put()
		{
			getdata();
			putdata();
			
			
		}
		
		
			
};
main()
{
employee e;
e.getdata();
e.putdata();
 salary s;
 s.get();
 s.set();
 s.put();

	
}
