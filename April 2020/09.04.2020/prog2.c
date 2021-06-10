#include <stdio.h>
#define N 10
//Array using MACRO
int main()
{
	int arr[N],i;
	for (i=0;i<N;i++)
	{
	printf ("Enter the Element at index %d :",i);
	scanf ("%d",&arr[i]);
    }
    printf ("\nThe Elements of the array are : \n");
    for (i=0;i<N;i++)
    {
    	printf ("%d\t",arr[i]);
	}
	return 0;
}
