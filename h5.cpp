#include <iostream>
using namespace std;
class square
{
	int side;
	public:
		
		square(int a)//parameterized
		{
			side=a;
		}
		void area ()
		{
			cout<<"Side is :"<<side;
			cout<<endl<<"The area of square is "<<side*side<<endl;
		}
};
main()
{
	square s(20);
	s.area();
	cout<<endl;
	square s1;
	s1.area();
}
