#include <stdio.h>

int main()
{
   int a,b,arr[100];
   printf("Enter the number of elements to store in the array :");
   scanf("%d",&b);
   
   printf("Enter any %d elements in the array :\n",b);
   for(a=0;a<b;a++)
    {
	printf("Element at place - %d : ",a);
	scanf("%d",&arr[a]);
	}
      
   printf("\nThe values stored in the array are : \n");
   for(a=0;a<b;a++)
    {
	printf("% d",arr[a]);
	}
   printf("\n\n");
   return 0;
 }

