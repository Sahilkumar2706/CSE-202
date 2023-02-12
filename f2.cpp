#include<iostream>
using namespace std;

class student
{

		int reg;
		char grade;
		float cgpa;
		
		public:
			void getdata()//declaration +defination within the class ,inline function
			{
				cout<<"enter the student details:\n";
				cout<<"reg. no.";
				cin>>reg;
				cout<<"grade:";
				cin>>grade;
				cout<<"CGPA;";
				cin>>cgpa;
			}
			
			void putdata();//decalaration//non inlinefunction
			
			
};
void student:: putdata()//defination
{
cout<<"The student details are:\n";
cout<<"registration nimmber:"<<reg<<endl;
cout<<"grade"<<grade<<endl;
cout<<"CGPA:"<<cgpa<<endl;;
}
int main()
{
	student s1;//class_name object_name;// data_type variable_name;
	s1.getdata();//using the getdata() for s1 object
	
}
