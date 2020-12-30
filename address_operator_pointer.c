/* Code for address operator: pointers 
		1.  &     adrress operator
		2.  *     vlaue operator
		3.	**    value operator
*/

# include<stdio.h>

void main()
{
	int number;            // number will values
	int *number_address;    // it will store only the address of other variables 
	
	printf("Enter the number = ");
	scanf("%d", &number);
	number_address = &number;			// passing the address of the number
	
	printf("Entered number is %d", number);
	
	printf("\nAddress of the number is %d", number_address);
	
	printf("\nEntered number is = %d", *number_address);	
}


