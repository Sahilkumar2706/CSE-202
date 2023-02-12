#include<iostream>
#include<string>
using namespace std;

class time
{
int hrs;
int mins;
public:
time()
{
hrs=5;
mins=80;
}
operator int()
{
return(hrs*60+mins);
}
};
main()
{
time t;

int minutes;
minutes=t;//class to basic

cout<<"The Time is "<<minutes<<" minutes";
}
