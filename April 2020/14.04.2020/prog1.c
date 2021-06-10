#include <stdio.h>
int main()
{
	int N,i;
	printf ("Enter the number of elements you want in your array : ");
	scanf ("%d",&N);
	int arr[N];
	printf ("Enter the elements of the array :\n");
	for (i=0;i<N;i++)
	{
		scanf ("%d",&arr[i]);
	}
	printf ("The reverse of the array is :\n");
	for (i=N-1;i>=0;i--)
	{
		printf ("%d\t",arr[i]);
	}
	return 0;
}
