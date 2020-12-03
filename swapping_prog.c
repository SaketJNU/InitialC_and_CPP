/* Program for swapping two variables 
a = 5  and b = 11    Before Swappping
a = 11  and b = 5    After Swapping
By using thrid variable
*/

#include<stdio.h>
void main()
{
	int a = 5, b = 11, temp;
	
	printf("Before swapping: a = %d and b = %d\n", a, b);
	
	temp  = a ;
	a = b;
	b = temp;
	
	printf("After swapping: a = %d and b = %d", a, b);	
}
