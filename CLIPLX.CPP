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
  int X,Y,Z,T, i = 0;
  cout<<"Entet total number of test cases - ";
  cin>>T;
  while(i < T){
	cout<<"\nEnter total number of points required and total remaining matches - ";
  	cin>>X>>Y;
  	int result = will_rcb_win(X,Y);
  	if(result !=0)
    		cout<<"Total wins required(atleast) - "<<result;
  	else
		cout<<"RCB can't qualify for Playoff";
	i++
  } 
  return 0;
}

