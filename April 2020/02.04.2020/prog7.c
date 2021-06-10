#include <stdio.h>
int main()
{
	int r,c;
	for (r=1;r==1;r++)
	{
		printf ("\n");
		for (c=1;c<=5;c++)
		{
		printf ("*");
		continue;
	    }
	    for (r=2;r<=4;r++)
	    {
	    	printf ("\n");
		for (c=1;c<=5;c++)
		{
			if (c<=4 && c>=2)
			printf (" ");
			else
			printf ("*");
		}
		for (r=5;r==5;r++)
		{
			printf ("\n");
			for (c=1;c<=5;c++)
			{
			printf("*");
		    }
		}
	    }
	}
	return 0;
}
