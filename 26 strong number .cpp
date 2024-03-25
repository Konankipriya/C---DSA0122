#include<iostream>
using namespace std;

int main()
{
	int i, number, temp, reminder;
	long sum = 0, factorial = 1;
	
	cout << "\nPlease Enter the Number to Check for Strong Number =  ";
	cin >> number;
	
	for(temp = number; temp > 0; temp =  temp / 10 )
	{
		factorial = 1;  
		reminder = temp % 10;
		
		for (i = 1; i <= reminder; i++)
		{
			factorial = factorial * i;
		}
		cout << "\nThe Factorial of "<< reminder << " = " << factorial;
		sum = sum + factorial;
	}	
	cout << "\n\nThe Sum of the Factorials of " << number << " is = " << sum << "\n\n";
			
	if(number == sum)
	{
		cout << number << " is a Strong Number";
	}
	else
	{
		cout << number << " is Not a Strong Number";
	}

 	return 0;
}
