#include <stdio.h>
void fun (int arr[],int len,int *max,int *min)
{
	int j;
	*max = *min = arr[0];
	for (j=1;j<len;j++)
	{
	if (*min > arr[j])
	*min = arr[j];
	if (*max < arr[j])
	*max = arr[j];
    }
}
int main()
{
	int i,N,len;
	printf ("Enter the number of elements you want in your array : ");
	scanf ("%d",&N);
	int arr[N];
	printf ("Enter the elements of the array :\n");
	for (i=0;i<N;i++)
	{
		scanf ("%d",&arr[i]);
	}
	len = sizeof(arr)/sizeof(arr[0]);
	int max,min;
	fun(arr,len,&max,&min);
	printf ("Maximum value in the array is : %d and\n Minimum value in the array is : %d",max,min);
	return 0;
}
