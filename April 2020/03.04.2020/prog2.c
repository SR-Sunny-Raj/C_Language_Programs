#include <stdio.h>
int main()
{
	int q,rem,result=0;
	printf ("Enter any number");
	scanf ("%d",&q);
	while (q!=0)
	{
		rem=q%10;
		result=result*10+rem;
		q=q/10;
	}
	printf ("%d",result);
	return 0;
}
