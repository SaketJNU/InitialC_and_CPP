/* Loops in C: We have three types of loopin C
1. do-while
2. while
3. for
Code for do-while loop
do
{   statement1;
	statement2;
	statement3;
	----
} while(condition);
*/

#include<stdio.h>

void main()
{
	int n, i;
	printf("Enter the number value = ");
	scanf("%d", &n);
	do
	{
		printf("This code is for do-while loop\n");
		n--;
		printf("%d", n);
	}while(n > 0);
}
