#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,area,s;
	printf ("\n Enter the length of the three sides of the triangle : ");
	scanf ("%f %f %f",&a,&b,&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf ("\n Area = %f",area);
	return 0;
}
