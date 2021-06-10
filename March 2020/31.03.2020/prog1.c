#include<stdio.h>
int main()
{
	int s=30;
	int *ps;
	ps=&s;
	*ps=s;
	printf("\n %d",s);
	printf("\n %d",ps);
	printf("\n %d",*ps);
	return 0;
}

