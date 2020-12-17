/* Program to create the two dimensional array (matrix )
A = [[3, 5, 11], [6, 4, 7]]
*/

#include<stdio.h>
void main()
{
	int A[2][3];    // Here matrix A has 2 rows and 3 columns
	int row, column;
	
	printf("------------------Please enter values of matrix ---------------\n");
	
	for(row = 0; row < 2 ; row++)
	{
		for(column = 0; column < 3; column++)
		{
			printf("\nEnter the value of A[%d][%d] = ", row + 1, column + 1);
			scanf("%d", &A[row][column]);
		}
	}
	
	printf("\n_______________Entered Matrix is ___________________\n");
	
	for(row = 0; row < 2 ; row++)
	{
		for(column = 0; column < 3; column++)
		{
			printf("\t %d", A[row][column]);
		}
		printf("\n");
	} 
 } 
  
