/*
Code for LOOP:   Need to run an updated statemnet multiple times
Keywrd:  for ,  while   do-while
while(condition check)
{
statement
}
Code for factorial of a number:   5!  = 120
*/

#include<stdio.h>
void main()
{
	int number, factorial = 1, i;
	printf("Enter the number = ");
	scanf("%d", &number);
	if (number >= 0)
	{
		if(number == 0)
		{
			factorial = 1;
		}
		else
		{
			i = 1;                          // Start
			while(i <= number)
			{
				factorial = factorial * i;
				printf("Iteration number = %d and factorial value = %d\n", i, factorial);
				i = i + 1;                  // Count
			}
		}
	}
	else
	{
		factorial = 0;
	}
	printf("Factorial of the entered number %d is %d", number, factorial);
}

