/* Call by value: sum of two numbers */
#include<stdio.h>
int sum_of_two(int, int);

void main()
{
int first_no = 10,  second_no = 15;
int sum;
sum = sum_of_two(first_no, second_no);
printf("Sum of %d and %d = %d", first_no, second_no, sum);
}

int sum_of_two(int fn, int sn)
{
	return (fn + sn);
}
