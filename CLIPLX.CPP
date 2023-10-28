#include <iostream>
using namespace std;

int will_rcb_win (int X, int Y){
  int Z, result;
  Z=X/2;
  if(Z<=Y)
    result = Z;
  else if(Z>Y)
    result = 0;
  return result;
}

int main() {
  int X,Y,Z,T;
  cout<<"Entet total number of test cases - ";
  cin>>T;
  for(int i=0;i<T;i++)
  {
  cout<<"\nEnter total number of points required and total remaining matches - ";
  cin>>X>>Y;
  int result = will_rcb_win(X,Y);
  if(result !=0)
    cout<<"Total wins required(atleast) - "<<result;
  else
	 cout<<"RCB can't qualify for Playoff";
  }
	return 0;
}

