#include<iostream>
using namespace std;
inline int square(int x){
 return x*x;
}
inline int cube (int x){
	return x*x*x;
}
int main()
{
	int num;
	cout<<"enter a num";
	cin>>num;
	cout<<"square of"<<num<<"is:"<<square(num)<<endl;
	cout<<"cube of"<<num<<"is:"<<cube(num)<<endl;
	return 0;
}
