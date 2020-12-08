/*  
Code for Relational Operators:
1. Equals to   ==
2. Greater than >
3. Less than    <
4. Greater than or equal to  >=
5. Less than or equal to     <=
6.  Not equal to             !=
All these operators return: True (1) or False (0) i.e boolean value
*/

#include<stdio.h>

void main()
{
int first_no, second_no;    // Variable Decleration
bool result;                // Variable Decleration
first_no = 10;    			// Variable Initialization
second_no = 12;             // Variable Initialization

result = first_no > second_no;  // Variable Initialization

printf("first no = %d is grater than second no = %d: %b", first_no, second_no, result);

}




