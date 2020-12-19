/* 
Addition of Matrix with condition check and user input
*/

#include<stdio.h>

void main()
{
	int r1, c1, r2, c2, i, j;
	int A[r1][c1], B[r2][c2];
	int Sum[r1][c1];
	
	printf("Enter the row size of first matrix = ");
	scanf("%d", &r1);
	
	printf("Enter the column size of first matrix = ");
	scanf("%d", &c1);
	
	printf("Enter the row size of second matrix = ");
	scanf("%d", &r2);
	
	printf("Enter the column size of second matrix = ");
	scanf("%d", &c2);
	
	/* Code for Condition Check */
		
	if (r1 == r2 && c1 == c2)
	{
		printf("\n __________ Enter the value of first matrix __________");
		for(i = 0; i<r1 ;i++)
		{
			for(j=0; j<c1; j++)
			{
				printf("\nEnter the value of A[%d][%d] = ", i+1, j+1);
				scanf("%d", &A[i][j]);
				printf("%d    %d", i, j);
			}
		}
		
		printf("\n __________ Enter the value of second matrix __________");
		for(i = 0; i <r2 ;i++)
		{
			for(j=0; j<c2; j++)
			{
				printf("\nEnter the value of B[%d][%d] = ", i+1, j+1);
				scanf("%d", &B[i][j]);
			}
		}		
		
		/* Code for Sum of Matrix */
		
		for (i=0; i<c1; i++)
		{
			for(j=0; j<r1; j++)
			{
				Sum[i][j] = A[i][j] + B[i][j];
			}
			
		}
		
		/*-------------------- Code for Output-------------*/
		
		printf("\nFirst Matrix is ______________");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				printf("\t%d", A[i][j]);
			}
			printf("\n");
		}

		printf("\nSecond Matrix is ______________");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				printf("\t%d", B[i][j]);
			}
			printf("\n");
		}
				
		printf("\nTheir Sum will be is ______________");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				printf("\t%d", Sum[i][j]);
			}
			printf("\n");
		}
	}
	
	else
	{
		printf("\nEntered matrix size are not same, so addition is not possible.");
	}
}

