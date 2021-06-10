#include <stdio.h>  
  
int  main()  
{  
    int arr[6]; 
    int a;  
    printf("Input 6 elements in the array :\n");  
    for(a=0; a<6; a++)  
    {  
	printf("Element at place - %d : ",a);
    scanf("%d", &arr[a]);  
    }    
    printf("\nElements of the array are: ");  
    for(a=0; a<6; a++)  
    {  
    printf("%d  ", arr[a]);  
    } 
    printf("\n");
	return 0;	
}

