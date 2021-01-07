/* Program to check the leap Year
If the Year is divisible 4 and not divisible by 100 then leap year
else check if the year is divisible by 400 then leap year else not a leap year
*/

#include<stdio.h>

void main()
{
	int year;
	printf("Enter the year = ");
	scanf("%d", &year);
	
	if (year%4==0 && year%100 != 0)
	{
		printf("\nEntered year %d is a leap year", year);
		
	}
	else
	{
		if(year%400==0)
				printf("\nEntered year %d is a leap year", year);
		else
				printf("\nEntered year %d is not a leap year", year);	
	}
}

