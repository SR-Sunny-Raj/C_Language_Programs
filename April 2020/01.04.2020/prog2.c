#include<stdio.h>
   int main() {
   int arr[20], a, b;
   printf("Enter no. of elements in array:");  
   scanf("%d", &b); /* Accepts the number of elements in the array */
  for (a = 0; a < b; a++) 
     scanf("%d", &arr[a]); /*Accepts the elements of the array */
int c;
int Temp;
c = a - 1;
a = 0;
 while (a < c) 
   {
    Temp = arr[a];
    arr[a] = arr[c];
    arr[c] =Temp;
    a++;             
    c--;        
   }
   printf("The reverse order of the elements of the array are : \n");
for (a = 0; a < b; a++) {
    printf("%d\n", arr[a]); 
   }
return (0);
}


