/* Code & * pointer and ** double pointer  */

#include<stdio.h>
void main()
{
	int number,  *firstP,  **secondP;
	printf("Enter the numbe = ");
	scanf("%d", &number);
	firstP = &number;
	secondP = &firstP;			// unsigned integer   %u
	printf("Value at number = %d \nValue at firstP = %u \nValue at secondP = %u", number, firstP, secondP);
	printf("\nYou have entered = %d", number);
	printf("\nYou have entered = %d", *firstP);
	printf("\nYou have entered = %d", **secondP);
	printf("\nYou have entered = %d", *(&number));
	printf("\nYour entered value is stored at %u memory location", &number);
}

