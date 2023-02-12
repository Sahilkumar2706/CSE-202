#include<iostream>
using namespace std;
class square
{
	int side;
	public:
		square()
		{
			side=10;
			
		}
		square(int a)
		{
			side=a;
		}
		square(square &ob)
		{
			side=ob.side;
		}
		void area()
		{
			cout<<"side is "<<side;
			cout<<endl<<"yhe area od square is"<<side*side<<endl;
		}
	};
	main()
	{
		cout<<"parameterizwd"<<endl;
		square s(20);
		s.area();
	}
	
{

cout<<endl;
cout<<"default"<<endl;
square s1;
s1.area();
cout<<endl;
square s2(s);
s2.area

};
