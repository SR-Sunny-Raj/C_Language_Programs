#include <stdio.h>
 int main()
 { 
 int arri[] = {1, 2 ,3};
  int *ptri = arri; 
  char arrc[] = {1, 2 ,3}; 
  char *ptrc = arrc; 
  printf("%d ", sizeof(arri)); 
  printf("%d ", sizeof(ptri)); 
  printf("%d ", sizeof(arrc)); 
  printf("%d ", sizeof(ptrc)); 
  return 0;
  } 
