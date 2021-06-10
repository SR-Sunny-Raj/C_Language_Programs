#include<stdio.h>
int main()
{
	int x=5;
	int *p;
	p=&x;
	x++;
	printf ("%d",*p);
	return 0;
}
