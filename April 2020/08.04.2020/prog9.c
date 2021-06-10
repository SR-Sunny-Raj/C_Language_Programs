#include<stdio.h>
#include<string.h>
char* reverse(char*,int);
int main()
{
    char str[100];
    char* ptr;
    int size ; 
    printf("Enter the string : ");
    gets(str);
    size = strlen(str);
   ptr=  reverse(str,size);
    puts(ptr);
    }
char* reverse(char *ptr ,int size )
{
int i ;
    char temp ; 
    for(i=0;i<size/2;i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[size-i-1];
        ptr[size-i-1] = temp ; 
     }
    return ptr ;
}

