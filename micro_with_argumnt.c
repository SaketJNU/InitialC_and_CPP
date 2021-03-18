// Macro with Arguments

#include <stdio.h>
#define AREA(x) (3.14*x*x )

void main()
{
	float r1 = 1.0, r2 = 2.0, a ;
	a = AREA ( r1 ) ;
	printf ("Area of circle = %f\n", a) ;
	a = AREA ( r2 ) ;
	printf ("Area of circle = %f\n",a) ;
}
