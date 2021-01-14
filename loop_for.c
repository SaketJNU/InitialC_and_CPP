/* 
	Code for for loop
	for(intialization ; condition ; increment or decrement)
	{
		Statement 1;
		Statement 2;
		----------
	}
	initialization and increment or decrement are optional whereas contion is necessary
*/
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number value = ");
	scanf("%d", &n);
	for( ;n > 0; )
	{
		printf("This code is for for loop.\n");
		n--;
	}
}
