#include <stdio.h>
int main()
{
	int n,i;
	printf ("Enter the number of elements you want in your array : ");
	scanf ("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++)
	{
	printf ("Enter the element %d : ",i);
	scanf ("%d",&arr[i]);	
	}
	printf ("The elements of the array are :\n");
	for(i=1;i<=n;i++)
	{
		printf ("%d\t",arr[i]);
	}
	printf ("\n The Sum of the elements of the array is : ");
	int sum=0;
	for (i=1;i<=n;i++)
	{
		sum=sum+arr[i];
	}
	printf ("%d",sum);
	return 0;
}
