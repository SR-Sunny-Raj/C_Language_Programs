#include <stdio.h>
//Program to check if a number is a perfect number or not
int main()
{
	int num,rem,i,sum=0;
	printf ("Enter any numer to check if it`s a perfect number or not : ");
	scanf ("%d",&num);
	for (i=1;i<num;i++)
	{
		rem=num%i;
		if (rem==0)
		sum=sum+i;
	}
	if (sum==num)
	printf ("%d is a perfect number",num);
	else
	printf ("%d is not a perfect number",num);
	return 0;
}
