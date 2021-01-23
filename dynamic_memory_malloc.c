/*
Dynamic Memory Management in C:  1. malloc(),  2. calloc(),  3. realloc()  4. free()
We need to use <stdlib.h>  library file. 
1.malloc():   It allocates the continuous memroy for large size and returns the pointer 
 (with void type) of the first block. Thus me need to type-cast it as per requirement.
 Initially, the allocated blocks have garbage values.
 Syntax:        ptr1  = (data-type1*)malloc(no of blocks * sizeof(data-type1))
 
 int x
 folat y = (float)x
*/

#include<stdio.h>
#include<stdlib.h>				// For dynamic meory allocation
void main()
{
	int n, i;
	int *ptr;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	ptr = (int*)malloc(n*sizeof(int));		// memory allocation bby malloc() function
	for(i=0; i<n;i++)
	{
		printf("\nEnter the %d value of dynamic array = ", i+1);
		scanf("%d", (ptr+i));
	}
	printf("\n-______________Entered value in dynamic array are ____________\n");
	for(i=0; i<n;i++)
	{
		printf("\nThe value at %dth position = %d and its address = %d", i+1, *(ptr+i), ptr+i);
	}
	printf("\nNow, The work has been completed so release the allocated memory.");
	free(ptr);								// deleting the allocated block by using free()
}
