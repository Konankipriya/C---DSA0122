#include<iostream>
using namespace std;
int main()
{

    int n, sqr, rem, sum=0;

    cout<<"Enter Number: ";
    cin>>n;

    sqr = n*n; 

    while(sqr!=0)
    {
        rem = sqr%10;
        sum += rem; 
        sqr /= 10;  
    }

    if(sum==n)
        cout<<n<<" is a neon number.";
    else
        cout<<n<<" is NOT a neon number.";

    return 0;
}
