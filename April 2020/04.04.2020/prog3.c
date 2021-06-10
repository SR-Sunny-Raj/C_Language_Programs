#include <stdio.h>
/* Program to add two numbers using Half Adder rule and without using plus operator in our program*/
int main()
{
	int a,b,sum,carry;
	printf ("Enter any two number to add\n");
	scanf ("%d %d",&a,&b);
	while (b!=0)
	{
		sum = a^b;
		carry = (a&b)<<1;
		a = sum;
		b = carry;
	}
	printf ("The sum is : %d",a);
}
