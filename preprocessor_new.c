/* Preprocessor code: Area of circle */
#include<stdio.h>
#define PI 3.14

void main()
{
	float radious, perimeter, area;
	
	printf("Enter the radious of circle = ");
	scanf("%f", &radious);
	perimeter = 2*PI*radious;
	area = PI*radious*radious;
	printf("Radious of circle = %0.2f \nPerimeter of circle = %0.2f \nArea of circle = %0.2f", radious, perimeter, area);
}
