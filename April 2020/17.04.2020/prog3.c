#include<stdio.h>
int main() {
  char str[50], *ptr;
  int i = 0;
  printf("Program to Find the Length of String \n");
  printf("Enter Any string [below 50 characters] : ");
  gets(str);
  ptr =&str[0];
  while (*ptr!= '\0') {
    i++;
    ptr++;
  }
  printf("Length of String : %d", i);
  return 0;
}

