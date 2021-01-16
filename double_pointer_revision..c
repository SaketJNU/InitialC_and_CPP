/* Double Pointer Revision */
#include<stdio.h>
void main()
{
	int a = 10;
	int *ptr1, **ptr2;
	ptr1 = &a;
	ptr2 = &ptr1;
	
	printf("The value at a = %d\n", a);
	printf("The value at a = %d\n", *ptr1);
	printf("The value at a = %d\n", **ptr2);
	printf("_________________________________\n");
	printf("The address of a = %u\n", &a);
	printf("The address of ptr1 = %u\n", &ptr1);
	printf("The address of ptr2 = %u\n", &ptr2);
	printf("_________________________________\n");
	printf("The value ot a = %d\n", a);
	printf("The value at ptr1 = %d\n", ptr1);
	printf("The value at ptr2 = %d\n", ptr2);
}
