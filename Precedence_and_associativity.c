/*
Code for Precedence and Associativity
*/

#include<stdio.h>

void main()
{
	int a = 5, b = 6, c = 7, result;
	result = a  + 2*b + c*a - a/b + c%a;
	printf("Desired Output = %d", result);        // Output = 54
}
