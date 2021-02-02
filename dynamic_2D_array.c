/* Dynamic memory allocation for 2D array:  Using a Single Pointer */
#include <stdio.h> 
#include <stdlib.h> 
  
void main() 
{ 
    int r, c; 
    int i, j; 

	printf("Enter the row size of the Matrix = ");
    scanf("%d", &r);
    
	printf("Enter the column size of the Matrix = ");
    scanf("%d", &c);
    
    int *arr = (int *)malloc(r * c * sizeof(int)); 
  	printf("\Enter the Matrix Element _________________________");
    for (i = 0; i <  r; i++){
	  for (j = 0; j < c; j++)
	   {	
		   	printf("\nEnter the a[%d][%d] = ", i,j);
		   	scanf("%d", (arr + i*c + j));
	   }
	}
    for (i = 0; i <  r; i++) 
      {
	  for (j = 0; j < c; j++) 
        {
			printf("\t%d ", *(arr + i*c + j)); 
		}
		printf("\n");
	  }
} 
