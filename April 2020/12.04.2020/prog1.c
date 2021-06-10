#include <stdio.h>
int main()
{
	int seen[10]={0};
	int N;
	printf ("Enter any number : ");
	scanf ("%d",&N);
	int rem;
	while(N>0)
	{
	rem=N%10;
	if (seen[rem]==1)
	break;
	seen[rem]=1;
	N=N/10;
	}
	if (N>0)
	printf ("YES the digits are repeated");
	else
	printf ("NO the digits are not repeated");
	return 0;
}
