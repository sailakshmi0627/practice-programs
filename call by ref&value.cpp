#include<iostream>
using namespace std;
//Function: call by value
void callbyvalue(int X) {
	X= X+10;
	cout<<"Inside call by value function,X="<< X <<endl;
}
//Function: call by reference
void callbyreference(int&y) {
	y= y+10;
	cout<<"Inside call by reference function,y="<< y <<endl;
}
int main() {
	int a= 5;
	int b= 5;
	cout<<"Before call by value,a="<<a<<endl;
	callbyvalue(a);
	cout<<"After call by value,a="<<a<<endl;
	cout<<"\nBefore call by reference,b="<<b<<endl;
	callbyreference(b);
	cout<<"After call by reference,b="<<b<<endl;
	return 0;
}
