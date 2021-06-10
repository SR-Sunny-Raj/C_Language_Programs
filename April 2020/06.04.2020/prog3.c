#include <stdio.h>
//Program to find the factorial of a number using RECURSION
int fun(int n)
{
	if (n==1)
	return 1;
	else
	return n*fun(n-1);
}
int main()
{
int n;
printf ("Enter the number to find it`s factorial : ");
scanf ("%d",&n);
printf ("\nThe factorial of %d is : %d",n,fun(n));
return 0;	
}
