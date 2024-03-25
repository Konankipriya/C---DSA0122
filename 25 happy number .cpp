#include <iostream>
#include <unordered_set>

using namespace std;

int isHappyNumber(int num){    
    int rem = 0, sum = 0;    
        
    while(num > 0){    
        rem = num%10;    
        sum = sum + (rem*rem);    
        num = num/10;    
    }    
    return sum;    
}    
        
int main()    
{    
    int num;
	cout<<"enter the number:";
	cin>>num;    
    int result = num;    
        
    while(result != 1 && result != 4){    
        result = isHappyNumber(result);    
    }     
    if(result == 1)    
        cout<<num<<" is a happy number";    
    else if(result == 4)    
        cout<<num<<" is not a happy number";     
     
    return 0;    
}    
