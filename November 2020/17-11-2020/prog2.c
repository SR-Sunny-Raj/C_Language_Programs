#include <stdio.h>
//Insertion Sort
int main()
{
int n,i,j,temp;
int arr[100]; 
printf("Enter the number of elements : ");
scanf("%d",&n); 
printf("Enter %d integers : ",n);
for (i=0 ; i<n ; i++)
{
    scanf("%d",&arr[i]);
}
for (i=1 ; i<=n-1 ; i++)
{
	j=i;
    while (j>0 && arr[j-1]>arr[j])
    {	        
        temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
}
printf("Sorted list in ascending order:\n");
for (i=0; i<=n-1 ; i++)
{
    printf("%d\t",arr[i]);
}
return 0;
}
