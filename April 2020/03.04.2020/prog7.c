#include <stdio.h>
int main()
{
  int arr[100], Size, a, L, P;
  
  printf("\nEnter the size of an array \n");
  scanf("%d",&Size);
  
  printf("\nEnter any %d elements in the array: \n", Size);
  for(a=0; a<Size; a++)
   {
    scanf("%d",&arr[a]);
   } 
  L = arr[0];
  for(a=1; a<Size; a++)
   {
    if(L<arr[a])
    {
    L = arr[a];
    P = a;
    }   
   }  
  printf("\nLargest element of the Array = %d",L);
  printf("\nIndex position of the Largest element = %d",P);
 return 0;
}

