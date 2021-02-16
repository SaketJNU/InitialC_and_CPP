// Code to reverse the digits of a number i.e. check palindrome number
#include<iostream>
using namespace std;
int main()
{
	int number, rnumber = 0;
	cout << "Enter the number = ";
	cin >> number;
	int i;
	while(number > 0)
	{
		i = number % 10;
		number = number / 10;
		rnumber = rnumber * 10 + i;
	}
	cout << "Its reverse number is = " << rnumber << endl;
	return 0;
}

// 123 % 10 = 3  x 10 = 30  
