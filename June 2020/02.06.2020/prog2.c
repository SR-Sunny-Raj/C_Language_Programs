#include<stdio.h>
int main()
{
	int i,j;
	int r1,c1,r2,c2,rsum,csum;
	int arr1[5][5],arr2[5][5],sum[5][5];
	printf ("\n Enter the number of rows in the first Matrix : ");
	scanf ("%d",&r1);
	printf ("\n Enter the number of columns in the first Matrix : ");
	scanf ("%d",&c1);
	printf ("\n Enter the number of rows in the second Matrix : ");
	scanf ("%d",&r2);
	printf ("\n Enter the number of columns in the second matrix : ");
	scanf ("%d",&c2);
	if (r1 != r2 || c1 != c2)
	{
		printf ("The number of rows and columns of both the matrices must be equal");
	}
	else
	{
	rsum = r1;
	csum = c1;
		printf ("\n Enter the elements of the first Matrix \n");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				scanf ("%d",&arr1[i][j]);
			}
		}
		printf ("\n Enter the elements of the second Matrix \n");
		for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				scanf ("%d",&arr2[i][j]);
			}
		}
		for (i=0;i<rsum;i++)
		{
			for (j=0;j<csum;j++)
			{
				sum[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
		printf ("\n The sum of the matrices are : \n");
		for (i=0;i<rsum;i++)
		{
			printf ("\n");
			for (j=0;j<csum;j++)
			{
				printf ("\t %d",sum[i][j]);
			}
		}
	}
	return 0;
}
