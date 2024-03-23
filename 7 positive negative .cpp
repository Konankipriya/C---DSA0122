#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	if(n>0)
	{
		cout<<"it is a positive number"<<endl;
	}
	else if(n==0)
	{
		cout<<"zero"<<endl;
	}
	else
	{
		cout<<"it is a negative number"<<endl;
	}
	return 0;
}
