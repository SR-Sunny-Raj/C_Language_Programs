#include<stdio.h>
void str_replace(char *p, char search) {
char *c,*d;
int i;
while( *p != '\0') {
if(*p == search) {
c = p;
i = 1;
while( *c != '\0') {
*c = *(c+1);
c = p + i;
i++;
}
}
p++;
}
}
int main()
{
char word[150],ch;
printf("Enter a string: ");
gets(word);
printf("Enter the character you want to remove: ");
scanf("%c",&ch);
str_replace(word,ch);
printf("Output String: ");
puts(word);
return 0;
}

