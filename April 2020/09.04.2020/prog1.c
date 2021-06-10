#include <stdio.h>
int main()
{
	int arr[5],i;
	for (i=0;i<5;i++)
	{
	printf("Enter the Element at index %d : ",i);
	scanf("%d",&arr[i]);
	}
	printf ("The Elements of the array are :\n" );
	for (i=0;i<5;i++)
	{
	printf("%d\t",arr[i]);
	}
	return 0;
}
