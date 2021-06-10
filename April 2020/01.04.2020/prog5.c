#include<stdio.h>

int main()
{
	int a,*pA,b,fact;
	pA=&a;
	printf("Enter any no.:");
	scanf("%d",pA);
	
	  fact=1;
	for(b=1;b<=*pA;b++)
	  fact=fact*b;
	  
	printf("The factorial of the no.:%d",fact);
	return 0;
}

