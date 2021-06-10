#include<stdio.h>
int main()
{
	int i,j,r1,r2,c1,c2,rsum,csum;
	int arr[5][5],brr[5][5],sum[5][5];
	printf ("\n Enter the number of rows in first matrix :");
	scanf ("%d",&r1);
	printf ("\n Enter the number of columns in second matrix :");
	scanf ("%d",&c1);
	printf ("\n Enter the number of rows in second matrix :");
	scanf ("%d",&r2);
	printf ("Enter the number of columns in second matrix :");
	scanf ("%d",&c2);
	if (r1 != r2 || c1 != c2)
	{
		printf ("The number of rows and columns of both the matrices must be equal");
	}
	rsum = r1;
	csum = c1;
	printf ("\n Enter the elements of the first matrix");
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		scanf ("%d",&arr[i][j]);
	}
	printf ("\n Enter the elements of the second matrix :");
	for (i=0;i<r2;i++)
	{
		for (j=0;j<c2;j++)
		scanf ("%d",&brr[i][j]);
	}
	for (i=0;i<rsum;i++)
	{
		for (j=0;j<csum;j++)
		sum[i][j] = arr[i][j] + brr[i][j];
	}
	printf ("The elements of the matrix sum are :");
	for (i=0;i<rsum;i++)
	{
		printf ("\n");
		for (j=0;j<csum;j++)
		printf ("\t %d",sum[i][j]);
		}
		return 0;
}
