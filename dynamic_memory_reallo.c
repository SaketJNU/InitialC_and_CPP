/*
Dynamic Memory Management in C:  1. malloc(),  2. calloc(),  3. realloc()  4. free()
We need to use <stdlib.h>  library file. 
3. realloc():   It allocates the extra continuous memroy for requireed large size and
   returns the pointer (with void type) of the first block. Thus me need to type-cast it
   as per requirement. it also retains the values of previous pointer to whom, we have
   resized. Assign the initail values to newly alloted blocks as per calloc() 
   or malloc() functions.
 
ptr1  = (data-type1*)realloc(ptr,(sum of old blocks + sum of new blocks required)* sizeof(data-type1))
 
 int x
 folat y = (float)x
*/

#include<stdio.h>
#include<stdlib.h>				// For dynamic meory allocation
void main()
{
	int n, i, new_size;
	int *ptr;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	ptr = (int*)calloc(n,sizeof(int));		// memory allocation bby malloc() function
	if(ptr == NULL)
	{
		printf("\nMemroy is not allocated and program is terminatig.!!!!");
	}
	else
	{
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
	}
	printf("\nEnter extra blocks required = ");
	scanf("%d", &new_size);
	ptr = realloc(ptr,(n + new_size)* sizeof(int));
	if(ptr == NULL)
	{
		printf("\nNo memory is allocated and program is going too terminate.");
	}
	else{
		printf("\n___Entered values in new alloted blocks ___\n");
		for(i=n; i<n+new_size;i++)
			{
				printf("\nEnter the %d value of dynamic array = ", i+1);
				scanf("%d", (ptr+i));
			}
		for(i=0; i<n+new_size; i++)
		{
			printf("\nThe value at %dth position = %d and its address = %d", i+1, *(ptr+i), ptr+i);
		}
	}
}
