#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number to find buzz or not:";
	cin>>num;
	if((num%10==7) ||(num%7==0))
	{
		cout<<num<<" is a buzz number"<<endl;
	}
	else
	{
		cout<<num<<" is not a buzz number"<<endl;
	}
	return 0;
}
