/* Two Dimensional Array of Pointers: 
Memory Allocation techniques:
a[3][4]:   assume &a[0][0]  = 23446 then &a[0][1] = 23450  and &a[1][0] =  &a[0][2] =    

*/

#include<stdio.h>

void main()
{
	int a[3][4] = {{1, 2, 4, 5},{ 3, 4, 6, 7},{ 7, 8, 9, 11}};
	int i,j;
	
	int *ptr;
	
	printf("The value in the array is -----------------------\n");
	for(i=0; i<3; i++)
	{
		for(j=0;j<4; j++)
		{
			printf("a[%d][%d] = %d    ", i+1, j+1, a[i][j]);
		}
		printf("\n");
	}
	

	/* here a hold the address of first row, not the first element*/
	
	printf("The address of a[0][0] = %u\n", a);
	printf("The address of a[0][1] = %u\n", a+1);
	printf("The address of a[1][0] = %u\n", a + 4);
	printf("_________________________________________\n");
	ptr = &a[0][0];
	printf("The address of a[0][0] = %d\n", ptr);
	printf("The address of a[0][1] = %d\n", ptr +1);
	printf("The address of a[1][0] = %d\n", ptr + 4);
	
}
