/*
Code to find the greater among three values
*/

#include<stdio.h>
void main()
{
	int first_no, second_no, third_no, largest;
	printf("Enter the First number = ");
	scanf("%d", &first_no);
	printf("Enter the Second number = ");
	scanf("%d", &second_no);
	printf("Enter the Third number = ");
	scanf("%d", &third_no);
	if (first_no >= second_no)
	{
		if(first_no >= third_no)
		{
			largest = first_no;
		}
		else
		{
			largest = third_no;
		}
	}
	else
	{
		if(second_no >= third_no)
		{
			largest = second_no;
		}
		else
		{
			largest = third_no;
		}
	}
		
	printf("Entered number are: First = %d, Second = %d, Third = %d\n", first_no, second_no, third_no);
	printf("The greater number among three entered number is %d", largest);
}
