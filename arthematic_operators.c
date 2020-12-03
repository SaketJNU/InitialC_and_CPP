/* Code to demonstrate the working of arthematic opertator */

#include<stdio.h>
/*
void main()
{
	int a = 15, b = 6, result;
	
	result = a + b;
	printf("Sum of %d and %d is %d", a, b, result);
	
	printf("\n");
	
	result = a - b;
	printf("Difference of %d and %d is %d", a, b, result);
	
	printf("\n");
	
	result = a * b;
	printf("Multiplication of %d and %d is %d", a, b, result);
	
	printf("\n");
	
	result = a / b;
	printf("Division of %d and %d is %d", a, b, result);
	
}
*/

void main()
{
	float a = 15, b = 6, result;
	
	result = a + b;
	printf("Sum of %0.1f and %0.1f is %0.2f", a, b, result);
	
	printf("\n");
	
	result = a - b;
	printf("Difference of %0.1f and %0.1f is %0.2f", a, b, result);
	
	printf("\n");
	
	result = a * b;
	printf("Multiplication of %0.1f and %f is %0.2f", a, b, result);
	
	printf("\n");
	
	result = a / b;
	printf("Division of %0.1f and %0.1f is %0.2f", a, b, result);
	
}

