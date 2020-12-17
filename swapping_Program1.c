/* Swapping of two numbers without using third (temp) variable */
#include<stdio.h>

void main()
{
	int first = 10, second = 15;
	printf("Values before swapping are First = %d and Second = %d\n", first, second);
	first = first + second;         // 10 + 15 = 25
	second = first - second;        //25 - 15 = 10
	first = first - second;         // 25 - 10 = 15
	printf("Values after swapping are First = %d and Second = %d", first, second);
}

