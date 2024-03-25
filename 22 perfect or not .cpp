#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,i;
	cout<<"enter the number:";
	cin>>n;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		cout<<n<<" is a perfect number"<<endl;
	}
	else
	{
		cout<<n<<" is a not a perfect number"<<endl;
	}
	return 0;
}
