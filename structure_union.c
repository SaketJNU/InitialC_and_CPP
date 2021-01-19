/* Structure and Union
1. Array stores the homogeneous data i.e. all the data are of sametype.
2. Structure and Union stores heterogeneous data i.e. all data may be different.
3. Syntax for Structure  : struct
4. Syntax for Union      : union
5. Structure and Union are known as user-defined data types.
Difference between structure and union:
In memory, space is allocated for each element in the structure
whereas the space for the heighest data variable is allocated in the union
*/
#include<stdio.h>
#include<string.h>
// Decleraltion of user-defined data type
struct student
{
	int roll_no;
	float percentage;
	char name[20];
};

union student1
{
	int roll_no;
	float percentage;
	char name[20];
};

void main()
{
	struct student s1, s2;
	union student1 u1, u2;
	s1.roll_no = 1;
	s1.percentage = 50.24;
	strcpy(s1.name, "Saket kumar");
	
	printf("Student's Roll No = %d\n", s1.roll_no);
	printf("Student's Name = %s\n", s1.name);
	printf("Student's Percentage = %0.2f\n", s1.percentage);
	
	s2.roll_no = 2;
	s2.percentage = 60.24;
	strcpy(s2.name, "Sachin Kumar");
	
	printf("Student's Roll No = %d\n", s2.roll_no);
	printf("Student's Name = %s\n", s2.name);
	printf("Student's Percentage = %0.2f\n", s2.percentage);	
	/* Code for Union */
	printf("\n_________________Output for Union _______________\n");
	
	u1.roll_no = 1;
	u1.percentage = 50.24;
	strcpy(u1.name, "Saket kumar");
	
	printf("Student's Roll No = %d\n", u1.roll_no);
	printf("Student's Name = %s\n", u1.name);
	printf("Student's Percentage = %0.2f\n", u1.percentage);
	
	u2.roll_no = 2;
	strcpy(u2.name, "Sachin Kumar");
	u2.percentage = 60.24;
	
	
	printf("Student's Roll No = %d\n", u2.roll_no);
	printf("Student's Name = %s\n", u2.name);
	printf("Student's Percentage = %0.2f\n", u2.percentage);	
	
	printf("\n\n\nThe size of structure s1 = %d", sizeof(s1));
	printf("\nThe size of union u1 = %d", sizeof(u1));

}

