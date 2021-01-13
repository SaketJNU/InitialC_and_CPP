/* Micro with ASCII Code */
# include <stdio.h>
#include<string.h>
# define ISDIGIT(y) ( y > 47 && y < 58 )
void main( )
{
	char ch ;
	printf ( "Enter any digit = " ) ;
	//scanf ( "%c", &ch ) ;
	ch = getch();   // Will take only one character 
	if (ISDIGIT ( ch ) )
		printf ( "You entered a digit\n" ) ;
	else
		printf ( "Illegal input\n" ) ;
}
