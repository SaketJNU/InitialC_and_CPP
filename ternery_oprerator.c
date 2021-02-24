/* Ternary Operator  (Condition ? Statement1 : Satement2)
i.e if condition is true statement 1 will execute otherwise Satement2 will execute
if(condition)
{statement1;}
else
{Statement2}
*/

#include<stdio.h>
void main()
{
	int number;
	int remain;
	printf("Enter the number = ");
	scanf("%d", &number);
	remain = number %2;
	(remain == 0? printf("Entered number %d is an Even number", number):printf("Entered number %d is an Odd number", number));
	//(  ? for true the work : for false the work);
	//(C1 ? (C2? S2t: S2f): S1f);
}
