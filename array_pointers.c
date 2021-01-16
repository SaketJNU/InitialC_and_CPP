/* Array of Pointers:

*/

#include<stdio.h>

void main()
{
	int a[4] = {2, 4, 5, 9};
	int i=0;
	
	printf("Value in the array is ---------------------\n");
	for(i; i < 4; i++ ) 
	{
		printf("The value at a[%d] = %d\n", i, a[i]);
	}
	/*  a holds the address of first memroy location of an array */
	printf("The value at pointer is = %d and its value is = %d\n", a, *a);       
	printf("The next address value is = %d and its value is = %d\n", a+1,*(a+1));
	printf("________________ Array of Pointers ___________________\n");
	for(i=0; i<4; i++)
	{
		printf("The value at pointer is = %d and its value is = %d\n", a + i, *(a +i));       
	}
}
