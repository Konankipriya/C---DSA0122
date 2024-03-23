#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0,remainder;
	cout<<"enter the number:";
	cin>>n;
	while(n!=0)
	{
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	cout<<"sum of digits is:"<<sum;
}
