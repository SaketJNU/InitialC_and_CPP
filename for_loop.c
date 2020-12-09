/*
Code for LOOP:   Need to run an updated statemnet multiple times
Keywrd:  for ,  while   do-while
for(start; check; count)
{
statement
}
Code for factorial of a number:   5!  = 120
Iteration vs Recussion
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
			for(i = 1; i<= number; i++)
			{
				factorial = factorial * i;
				printf("Iteration number = %d and factorial value = %d\n", i, factorial);
			}
		}
	}
	else
	{
		factorial = 0;
	}
	printf("Factorial of the entered number %d is %d", number, factorial);
}


