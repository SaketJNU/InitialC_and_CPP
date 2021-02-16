// Code to check Prime Numbers

#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter the number = ";
	cin >> number;
	int i, flag = 0;
	for(i = 2; i < number/2; i++)
	{
		if (number % i == 0)
		{
			flag = 1;
		}
	}
	if(flag == 1)
	{
		cout << "Entered number " << number << " is not a prime number";
	}
	else
		cout << "Entered number " << number << "is a prime number";
}
