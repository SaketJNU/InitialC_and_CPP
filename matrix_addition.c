/* Program for Matrix Addition */

#include<stdio.h>

void main()
{
	int A[2][3], B[2][3], sum[2][3];    // Here matrix A has 2 rows and 3 columns
	int row, column;
	
	printf("------------------Please enter values of first matrix A ---------------\n");
	
	for(row = 0; row < 2 ; row++)
	{
		for(column = 0; column < 3; column++)
		{
			printf("\nEnter the value of A[%d][%d] = ", row + 1, column + 1);
			scanf("%d", &A[row][column]);
		}
	}
	
	printf("------------------Please enter the of second matrix B ---------------\n");
	
	for(row = 0; row < 2 ; row++)
	{
		for(column = 0; column < 3; column++)
		{
			printf("\nEnter the value of B[%d][%d] = ", row + 1, column + 1);
			scanf("%d", &B[row][column]);
		}
	}
	
	for(row=0; row<2; row++)
	{
		for(column=0; column<3; column++)
		{
			sum[row][column] = A[row][column] + B[row][column];
		}
	}
	
	printf("\n_______________Entered Matrix A is ___________________\n");
	
	for(row = 0; row < 2 ; row++)
	{
		for(column = 0; column < 3; column++)
		{
			printf("\t %d", A[row][column]);
		}
		printf("\n");
	} 

	
	printf("\n_______________Entered Matrix B is ___________________\n");
	
	for(row = 0; row < 2 ; row++)
	{
		for(column = 0; column < 3; column++)
		{
			printf("\t %d", B[row][column]);
		}
		printf("\n");
	} 
	
	printf("\n Sum A and B  is -------------\n");
	for(row = 0; row < 2 ; row++)
	{
		for(column = 0; column < 3; column++)
		{
			printf("\t %d", sum[row][column]);
		}
		printf("\n");
	}
}

