#include <stdio.h>
//Pyramid of Stars
int main()
{
	int n,r,c;
	printf ("Enter the number of rows you want in your pyramid : ");
	scanf ("%d",&n);
	for (r=1;r<=n;r++)
	{
		for (c=1;c<=2*n-1;c++)
		{
			if (c>=n-(r-1) && c<=n+(r-1))
			printf ("*");
			else
			printf (" ");
		}
		printf ("\n");
	}
	return 0;
}
