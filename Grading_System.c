/*  nesting if-else  or if-else ladder
:Code for exam grading system:
if marks >= 75 %:
    first division with honrs
if marks >=60  and < 75:
    first division only
if marks >= 45 %  and < 60%:
    second division
if marks >= 33% and < 45%:
    pass third divion
if marks < 33%:
    fail in the exam
*/
#include<stdio.h>
void main()
{
	float marks;
	printf("Enter the marks percentage obtained: ");
	scanf("%f", &marks);
	//printf("Entered marks are %0.2f", marks);
	
	if(marks <  33)
	{
		printf("The person has been failed in the exam.\n");
	}
	else
	{
		if(marks >= 33 &&  marks < 45)
		{
			printf("The person has passed with Third Division.");
		}
		else
		{
			if(marks >= 45 && marks < 60)
			{
				printf("The person has been passed with Second Division");
			}
			else
			{
				if(marks >= 60 && marks < 75)
				{
					printf("The person has been passed with First Division");
				}
				else
				{
					printf("The person has been passed having First Division with Honrs.");
				}
			}
		}
	}
}










