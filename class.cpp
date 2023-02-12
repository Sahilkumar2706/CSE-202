#include<iostream>
using namespace std;

class student
{
	
	int registration;
	char grade;
	float cgpa;
	public:
	void getdata()
	{
		cout<<"Enter the student details:\n";
		cout<<"Registration number:";
		cin>>registration;
		cout<<"grade:";
		cout<<"CGPA:";
		cin>>cgpa;
	}
	void putdata();
};

void student::putdata()
{
	cout<<"The student details are:\n";
	cout<<"Registarion number"<<Registration number<<end;
		cout<<"grade: "<<grade<<endl;
		cout<<"CGPA: "<<cgpa<<endl;;
	
}

int main()
{
	student s1;
	s1.getdata();
	s1.putdata();
}
