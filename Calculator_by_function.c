/* Code for Caculator by using call by reference */

#include<stdio.h>

void sum(int*, int*, int*);
void difference(int*, int*, int*) ;
void multiply(int*, int*, int*);
void division(int*, int*, int*);

void main()
{
	int fno, sno, result, choice;
	printf("Enter the first number = ");
	scanf("%d", &fno);
	printf("Enter the second number = ");
	scanf("%d", &sno);
	printf("Enter your choice ----------\n 1 for addition \t 2 for substraction \t 3 for multiplication \t 4 for division \n choice = ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			sum(&fno, &sno, &result);
			break;
		case 2:
			difference(&fno, &sno, &result);
			break;
		case 3:
			multiply(&fno, &sno, &result);
			break;
		case 4:
			division(&fno, &sno, &result);
		break;
		deafult:
			result = 0;
	}
	printf("________________\n The Required result = %d", result);
}

void sum(int *f, int *s, int*r)
{
	*r = *f + *s;
}
void difference(int *f, int *s, int*r)
{
	*r = *f - *s;
}
void multiply(int *f, int *s, int*r)
{
	*r = *f * *s;
}
void division(int *f, int *s, int*r)
{
	*r = *f / *s;
}
