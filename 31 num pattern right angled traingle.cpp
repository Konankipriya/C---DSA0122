#include<iostream>
using namespace std;
int main()
{
	int rows,i;
	cout<<"enter the number of rows:";
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<"\n";
	}
}
