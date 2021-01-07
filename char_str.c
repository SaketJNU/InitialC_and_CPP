/* Code to demonstrate character and strings */

#include<stdio.h>
#include<string.h>
void main()
{
	char fname = 's';
	char name[] = "Saket";
	char name1[20] = "Dr. Saket Kumar";
	char yname[20];
	printf("Fname is = %c\n", fname);
	printf("Name = %s\n", name);
	printf("Full Name = %s\n", name1);
	printf("\nPlease enter your name = ");
	gets(yname);   							// For input a string
	printf("Your name is %s \n", yname);
	printf("%s", strcat(name1, yname));
	printf("\n Now my name = %s", name1);
}
