#include <iostream>
using namespace std;

int main() {
  int X,Y,Z,T;
  cout<<"Entet total number of test cases - ";
  cin>>T;
  for(int i=0;i<T;i++)
  {
  cout<<"\nEnter total number of points required and total remaining matches - ";
  cin>>X>>Y;
  Z=X/2;
  if(Z<=Y)
    cout<<"Total wins required(atleast) - "<<Z;
  else if(Z>Y)
	 cout<<"RCB can't qualify for Playoff";
  }
	return 0;
}

