/* 
	Code to count the number of digits in the input number
	4698/10 = 469/10 = 46/10= 4/10 = 0
*/

#include<stdio.h>
void main()
{
	int number, count = 0;
	printf("Enter the number = ");
	scanf("%d", &number);
	while(number != 0)
	{
		number = number / 10;
		count++;
	}
	printf("\nYou have entered a %d digit number.", count);
}
