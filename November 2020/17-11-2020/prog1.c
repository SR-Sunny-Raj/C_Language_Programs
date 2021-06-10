#include<stdio.h>
//Selection Sort
int main()
{
int i,j,n,temp,arr[100];
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter %d elements: ",n);
for(i=0 ; i<n ; i++)
scanf("%d",&arr[i]);
for(i=0 ; i<n ; i++)
{
    for(j=i+1 ; j<n ; j++)
	{
    if(arr[i]>arr[j])
		{
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
printf("Sorted elements :\n");
for(i=0 ; i<n ; i++)
printf(" %d\t",arr[i]);
return 0;
}
