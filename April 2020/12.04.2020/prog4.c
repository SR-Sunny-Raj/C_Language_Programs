#include <stdio.h>
int main()
{
	int i,j,k,sum=0,arows,acolumns,brows,bcolumns;
	int arr[50][50];
	int brr[50][50];
	int product[50][50];
	printf ("Enter the number of rows and columns of the 1st Matrix : ");
	scanf ("%d %d",&arows,&acolumns);
	printf ("Enter the Elements of the 1st matrix :\n");
	for (i=0;i<arows;i++)
	{
		for (j=0;j<acolumns;j++)
		{
		scanf ("%d",&arr[i][j]);	
		}
	}
	printf ("Enter the number of rows and columns of the 2nd Matrix : ");
	scanf ("%d %d",&brows,&bcolumns);
	if (acolumns!=brows)
	{
		printf ("Matrix multiplication of these Matrices is not possible");
	}
	else
	{
		printf ("Enter the Elements of the 2nd matrix :\n");
		for (i=0;i<brows;i++)
		{
			for (j=0;j<bcolumns;j++)
			{
				scanf ("%d",&brr[i][j]);
			}
		}
	}
		for (i=0;i<arows;i++)
		{
			for (j=0;j<bcolumns;j++)
			{
				for (k=0;k<brows;k++)
				{
					sum = sum + arr[i][k]*brr[k][j];
				}
				product[i][j]=sum;
				sum = 0;
			}
		}
		printf ("The product of the two matrices are : \n");
    for (i=0;i<arows;i++)
	{
    for (j=0;j<bcolumns;j++)
		{
			printf ("%d ",product[i][j]);
		}
		printf ("\n");
    }
	return 0;
}
