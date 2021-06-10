#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(i==1 || i==2 || i==3)
			{
				if(j==0 || j==4)
				printf("* ");
				else
				printf("  ");
			}
			else
			{
				printf ("* ");
			}
		}
		printf("\n");
	}
	return 0;
}
