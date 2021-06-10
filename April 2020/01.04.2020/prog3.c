#include<stdio.h>
   int main()
{
   int arr[5];
   int a,sum=0;
   int *p;
   printf("\nEnter array elements :");
   for(a=0;a<5;a++)
      scanf("%d",&arr[a]);

   /* arr is equal to base address
    * arr = &arr[0] */
   p = arr; //or p=&arr[0];
   for(a=0;a<5;a++) 
   {
      //*p refers to the value at address
      sum = sum + *p;
      p++;
   }
   printf("\nThe sum is: %d",sum);
   return 0;
}

