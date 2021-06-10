#include <stdio.h>
int main()
{
	int x,y;
	printf ("Enter any two integer to add \n");
	scanf ("%d %d",&x,&y);
	if (y>0)
	{
		while (y!=0)
		{
			x++;
			y--;
		}
	}
		else
		{
			while (y!=0)
			{
				x--;
				y++;
			}
	    }
	    printf ("The sum of two numbers is : %d",x);
	    return 0;
	}
