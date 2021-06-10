#include <stdio.h>
int main() 
{
    char s1[100] = "Programming is ", s2[] = "Awesome";
    int a, b;
    for (a = 0; s1[a] != '\0'; ++a) 
	{
        printf("a = %d\n", a);
    } 
    for (b = 0; s2[b] != '\0'; ++b, ++a) 
	{
        s1[a] = s2[b];
    }
    s1[a] = '\0';
	printf("The World of ");
    puts(s1);

    return 0;
}

