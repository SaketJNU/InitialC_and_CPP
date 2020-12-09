/*
Datatype Classification: Premitive Data-Type(Built in datatypes) and 
Derived Data Types (User defined datatypes)
Code for Array
a = [3, 5, 8, 10] one dimensional array
a = [a0, a1, a2,a3]
declaration:    datatype  variableName[array-size]
*/

#include<stdio.h>
void main()
{
	int a[4], i, sum = 0;
	printf("Enter the values into the array ----------");
	for(i=0; i<= 3; i++)
	{
	 	printf("\nEnter %d position into the array = ", i + 1);
	 	scanf("%d", &a[i]);
	}
	
	printf("\n\nEntered number are ---------\n");
	for(i = 0; i < 4; i++)
	{
		printf("\t%d", a[i]);
	}
	for(i=0; i<4; i++)
	{
		sum = sum + a[i];
	}
	printf("\nSum of the entered number is %d", sum);
}
