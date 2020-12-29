/*
	Recurrsive Function Example
*/

#include<stdio.h>

void print_name(int );

void main()
{
	int number;
	printf("Enter the number of times, you want to display the msg. = ");
	scanf("%d", &number);
	print_name(number);
	printf("\n<----------------Now the msg. done. ----------------->");
}

void print_name(int number)
{
	if(number > 0)
	{
		print_name(number - 1);
		printf("\nThis  is the msg. that i am the number %d", number);
	}
}
