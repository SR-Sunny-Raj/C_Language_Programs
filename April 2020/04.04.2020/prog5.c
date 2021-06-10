#include <stdio.h>
int main()
{
	int n,r,i;
	printf ("Enter the number of rows you want in your floyd`s triangle : ");
	scanf ("%d",&r);
	for (n=1;n<=r;n++)
	{
		for (i=1;i<=n;i++)
		{
		printf ("%d ",i); //Here im this line, instead of printing 'i' if we print 'n' , then output will be different , if you want you can check
	    }
	    printf ("\n");
	}
	return 0;
}
