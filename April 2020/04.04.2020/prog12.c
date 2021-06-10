#include <stdio.h>
int add(int,int);
int main()
{
	int m,n,sum;
	printf ("Enter any two numbers to add :");
	scanf ("%d %d",&m,&n);
	sum = add(m,n);
	printf ("The sum of the numbers is : %d",sum);
	return 0;
}
int add(int a, int b)
{
	return (a+b);
}
