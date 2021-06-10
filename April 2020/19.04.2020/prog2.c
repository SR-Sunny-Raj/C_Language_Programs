#include <stdio.h>
#define N 5
int main()
{
	int arr[N],*ptr;
	printf ("Enter %d elements in the array :",N);
	for (ptr=arr;ptr<=arr+N-1;ptr++)
	{
		scanf ("%d",ptr);
	}
	printf ("The elements of the array in reverse order is :\n");
	for (ptr=arr+N-1;ptr>=arr;ptr--)
	{
		printf ("%d\t",*ptr);
	}
	return 0;
}
