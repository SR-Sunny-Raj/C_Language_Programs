#include <stdio.h>
int main()
{
	int n,i,j;
	printf ("Enter the number of lines upto which you want your pyramid : ");
	scanf ("%d",&n);
	for (i=1;i<=n-1;i++)
	{
		for (j=1;j<=(2*n)-1;j++)
		{
			if(j<=n-i || j>=n+i || j>n-i+1 && j<n+i-1)
			printf (" ");
			else
			printf ("*");
		}
		printf ("\n");
	}
	if (i==n)
	{
		for (j=1;j<=(2*n)-1;j++)
	printf ("*");		
	}
	return 0;
}
