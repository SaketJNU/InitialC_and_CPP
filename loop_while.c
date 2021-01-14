/* Code for while loop
while(condition)
{
Statement 1;
Statement 2;
--------
}
*/
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number value = ");
	scanf("%d", &n);
	while(n > 0)
	{
		printf("This is the code for while loop.\n");
		--n;  			// n = n -  1				n--
	}
}
