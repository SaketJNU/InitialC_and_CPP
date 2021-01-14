/* 
	Alphabet using while loop
	Here we will use ASCII code for alphabets
*/
#include<stdio.h>

void main()
{
	int ascii_code = 32;
	while(ascii_code <= 120)
	{
		printf("Ascii code = %d \t character = %c\n", ascii_code, ascii_code);
		ascii_code++;
	}
}
