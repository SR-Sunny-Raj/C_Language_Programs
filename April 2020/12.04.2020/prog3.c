#include <stdio.h>
int main()
{
	int i,j,sum=0;
	int arr[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			printf ("%d\t",arr[i][j]);
		}
	}
	printf ("\nThe Row sum is :\n");
	for (i=0;i<5;i++)
	{
		sum=0;
		for (j=0;j<5;j++)
		{
			sum = sum+arr[i][j];
		}
		printf ("%d\t",sum);
	}
	printf ("\nThe Column sum is :\n");
	for (i=0;i<5;i++)
	{
		sum=0;
		for (j=0;j<5;j++)
		{
			sum = sum+arr[j][i];
		}
		printf ("%d\t",sum);
	}
	return 0;
}
