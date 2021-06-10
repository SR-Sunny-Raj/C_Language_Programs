#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n;
    printf ("Enter any number : ");
    scanf("%d", &n);
    int size = n*2 - 1;
    int i;
    for(i=0;i<size;i++){
    	int j;
        for(j=0;j<size;j++){
            int min = i < j ? i : j;
            min = min < size-i ? min : size-i-1;
            min = min < size-j-1 ? min : size-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
