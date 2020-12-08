/*
Increment Operator:  (Pre: ++a     and   Post:  a++  ):  a = a + 1
Decrement Operator:  (Pre: --a     and   Post:  a--   ):  a = a - 1
*/

#include<stdio.h>

void main()
{
	int a = 10;
	
	printf("Post Increment Operator Effect = %d\n", a++);  // Output = 10
	printf("Post Increment Operator Effect = %d\n", a);    // Output = 11

	printf("Pre-increment operator effect = %d\n", ++a);   // Output = 12
	
	printf("Pre-decrement operator effect = %d\n", --a);   // Output = 11
	
	printf("Pre-decrement operator effect = %d is %d\n", a--, a);   //Output  = 11, 10
	

}
