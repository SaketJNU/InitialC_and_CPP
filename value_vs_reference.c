/* Swapping of two numbers using call by reference */

#include<stdio.h>
void swap_two_no(int , int );

void main()
{
	int fno, sno;
	printf("Enter the first number = ");
	scanf("%d", &fno);
	printf("Enter the second number = ");
	scanf("%d", &sno);
	printf("\n<--------------------------------------------------------------------->");
	printf("\nBefore swapping the numbers are: First number = %d and Second Number = %d", fno, sno);
	swap_two_no(fno, sno);
	printf("\n<--------------------------------------------------------------------->");
	printf("\nAfter swapping the numbers are: First number = %d and Second Number = %d", fno, sno);
}

// Code for call by value funtion
void swap_two_no(int first, int second)
{
	int temp;
	temp = first;
	first = second;
	second = temp;
}
