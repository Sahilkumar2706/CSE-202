#include<iostream>
using namespace std;
int main()
{
  bool result;
  result=(3!=5) && (3<5);
  cout<<"(3!=5) && (3<5)is "<<result<<endl;
  
  result= (3==5) && (3<5);
  cout<<"(3==5) && (3<5)is "<<result<<endl;
  
  result= (3==5) && (3>5);
  cout<<"(3==5) && (3>5)is "<<result<<endl;
  
  result=(3!=5) || (3<5);
  cout<<"(3==5) || (3>5)is "<<result<<endl;
  result=(3!=5) && (3>5);
  cout<<"(3==5) && (3>5)is "<<result<<endl;
  
  result=(3==5) && (3<5);
  cout<<"(3==5) && (3<5)is "<<result<<endl;
  
  result=(3==5) && (3>5);
  cout<<"(3==5) && (3<5)is "<<result<<endl;
  
  result= !(5==5);
  cout<<"!(5==2)"<<result<<endl;
  
    result= !(5==5);
       cout<<"!(5==5)"<<result<<endl; 
       return 0;
  
}
