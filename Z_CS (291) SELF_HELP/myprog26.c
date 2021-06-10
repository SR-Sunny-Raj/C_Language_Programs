#include<stdio.h>
int main()
{
int i,j,arr[3][3],brr[3][3];
printf ("\n Enter the elements of the matrix :");
for (i=0;i<3;i++)
{
	for (j=0;j<3;j++)
	{
		scanf ("%d",&arr[i][j]);
	}
	}
	printf ("\n The elements of the matrix are :");
	for (i=0;i<3;i++)
	{
		printf ("\n");
		for (j=0;j<3;j++)
		printf ("\t %d",arr[i][j]);
		}
		for (i=0;i<3;i++)
		{
			for (j=0;j<3;j++)
			brr[i][j]=arr[j][i];
		}
		printf ("\n The elements of the tranposed matrix are :");
		for (i=0;i<3;i++)
		{
			printf ("\n");
			for (j=0;j<3;j++)
			printf ("\t %d",brr[i][j]);
		}
	return 0;
}
