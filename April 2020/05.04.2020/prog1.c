#include <stdio.h>
void f1(int *a, int *b)
{
	int c;
	c = *a; *a = *b; *b = c;
}
int main()
{
	int a = 4, b = 5, c = 6;
	f1(&b,&c);
	printf ("%d",c-a-b);
	return 0;
}

