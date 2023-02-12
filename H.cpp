#include<iostream>
#include<string>
#include<fstream>
using namespace std;

main()
{

	fstream ob;
	ob.open("file", ios::out);
	ob.close();
}
	
