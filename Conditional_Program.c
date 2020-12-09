/*
Code For Conditional Program:    If    and   else
if(condition)
{ staments}
else
{statement}
Code for Even and Odd Program
*/

#include<stdio.h>

void main()
{
int number, reminder;
printf("Enter the number = ");
scanf("%d", &number);                           // Input from user
printf("\nEntered number is = %d\n", number);
reminder = number % 2;      						// Compute the reminder

if(reminder == 0)
{
	printf("Entered number %d is an even number\n", number);
}
else
{
	printf("Entered number %d is an odd number", number);
}

}

