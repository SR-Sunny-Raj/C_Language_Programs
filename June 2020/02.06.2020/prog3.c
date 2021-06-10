#include <stdio.h>
int main()
{
	int i,n,min,sum=0;
	int arr[100];
	printf ("Enter the number of elements you want in your array : ");
	scanf ("%d",&n);
	printf ("The elements of the array are : \n");
	for (i=0;i<n;i++)
	{
		scanf ("%d",&arr[i]);
	}
	min = arr[0];
	for (i=0;i<n;i++)
	{
		if (min>arr[i])
		{
			min = arr[i];
		}
		else
		{
			min;
		}
		sum = sum + arr[i];
	}
	printf ("\n The smallest element of the array is : %d",min);
	printf ("\n The sum of the array is : %d",sum);
	return 0;
}
