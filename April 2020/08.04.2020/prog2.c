#include<stdio.h> 
int main() 
{ 
int arr[20],n,i; 
int *ptr; 
printf("Enter the Number of Element in array:"); 
scanf("%d",&n); 
printf("\n Enter the element into array: \n"); 
for(i = 0; i < n; i++) 
{ 
scanf("%d ",&arr[i]); 
ptr++; 
} 
ptr = &arr[0]; 
printf("\n Element in array are :\n"); 
for(i = 0; i < n ; i++) 
{ 
printf("\t %d",(*ptr)); 
ptr++; 
} 
return 0; 
} 
