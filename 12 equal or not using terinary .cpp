#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the numbers:"<<endl;
	cin>>a>>b;
	string result=(a==b)?"equal":"notequal";
	cout<<"the numbers"<<a<<"and"<<b<<"are"<<result<<endl;
	return 0;
}
