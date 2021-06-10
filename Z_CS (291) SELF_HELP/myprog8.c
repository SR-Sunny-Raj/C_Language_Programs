#include <stdio.h>
int main ()
{
	float Sunny = 24.0/26.0;
	printf ("%.20f\n",Sunny);
	
	double N = 24.0/26.0;
	printf ("%.20lf\n",N);
	
	long double Y = 24.0/26.0;
	printf ("%.20Lf\n",Y);
}
