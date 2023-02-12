#include<iostream>
using namespace std;

class school
{
	int noq;
	int tm;
	public:
	school()
		{
			cout<<"Total number of questions: "<<endl;
			cin>>noq;
			tm=40;
		}
		void put()
		{
			cout<<"Number of question is:"<<noq<<endl;
			cout<<"Total marks: "<<tm<<endl;
		}
};
class sec1: public school
{
	int am;
	public:
	sec1()
	{
		am =29;
	}
	void put1()
	{
		cout<<"Average marks of sec1: "<<am<<endl;
	
	}
};

class sec2: public school
{
	int am1;
	public:
	sec2()
	{
		am1=28; 
	}
	void put2()
	{
		cout<<"Average marks is:"<<am1<<endl;
	}
	

};
main()
{
	sec1 ob1;
	ob1.put();
	ob1.put1();
	
	sec2 ob2;
	ob2.put();
	ob2.put2();

	
}
