#include<iostream>
using namespace std;
class B
{
public:
int n1;
virtual void show()
{
cout<<"n1: "<<n1<<endl;
}
};
class D:public B
{
public:
int n2;
void show()
{
cout<<"n1: "<<n1<<endl;
cout<<"n2: "<<n2<<endl;
}
};


main()
{
	B *ptr;
	B b;
	ptr =&b;
	ptr->n1=50;
	ptr->show();
	
	cout<<"\n";
	
	D d;
	ptr->&d;
	ptr->n1=100;
	((D*)ptr)->n2=200;
	ptr->show();
	
	
}
