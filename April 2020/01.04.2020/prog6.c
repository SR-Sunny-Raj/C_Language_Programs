#include<stdio.h>

int main() {
  char str[50], *p;
  int a = 0;
  printf("Program to Find the Length of String \n");
  printf("Enter Any string [below 50 characters] : ");
  gets(str);
  p =&str[0];
  while (*p!= '\0') {
    a++;   p++;
  }
  printf("Length of String : %d", a);
  return 0;
}

