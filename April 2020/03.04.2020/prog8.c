#include <stdio.h>
#include <math.h>
int main()
{
	int x,count=0,v1,v2,i;
	printf ("Enter the number to check if it`s a Prime number or not : ");
	scanf ("%d",&x);
	v1 = ceil(sqrt(x));
	for (i=2;i<=v1;i++)
	{
		v2 = x%i;
		if (v2==0)
		{
			count=1;
		}
	}
	if ((count==0 && v2!=1) || v2==2 || v2==3)
	printf ("%d is a Prime number",x);
	else
	printf ("%d is not a prime number",x);
	return 0;
}
