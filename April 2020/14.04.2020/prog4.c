#include <stdio.h>
int *fun(int arr[],int n)
{
	return &arr[n/2];
}
int main()
{
	int n,i;
	printf ("Enter the number of elements of the array : ");
	scanf ("%d",&n);
	printf ("Enter the elements of the array : ");
	int arr[n];
	for (i=0;i<n;i++)
	{
		scanf ("%d",&arr[i]);
	}
	n = sizeof(arr)/sizeof(arr[0]);
	int *mid;
	mid = fun(arr,n);
	printf ("The middle term of the array is : %d",*mid);
	return 0;
}
