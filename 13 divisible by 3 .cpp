#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number:"<<endl;
	cin>>n;
	string result=(n%3==0)? "divisible":"not divisible";
	
	cout<<n<<" "<<"is"<<" "<<result<<"by 3.";
}
