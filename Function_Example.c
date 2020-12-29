/* 
	Function Example: Call by Value
*/

#include<stdio.h>

void function1();						// function decleration
void function2(int);					// function decleration
int square_of_number(int);				// function decleration

void main()
{
	int number, sqnumber;
	function1();
	scanf("%d", &number);
	function2(number);
	sqnumber = square_of_number(number);
	printf("\nIts Square is %d", sqnumber);
}

void function1()
{
	printf("Enter the number = ");
}

void function2(int number1)
{
	printf("\n You have enterted the number = %d", number1);
}

int square_of_number(int number)
{
	return number*number;	
}
