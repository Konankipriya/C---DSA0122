#include<iostream>
using namespace std;
int main()
{
	int num,i,flag=0;
	cout<<"enter the number:";
	cin>>num;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<num<< " is a prime number";
	}
	else
	{
		cout<<num<< " is composite number";
	}
}
