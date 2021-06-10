#include <stdio.h>
int main()
{
	int n,q,rem,result=0;
	printf ("Enter the number to check if it's palindrome or not \n");
	scanf ("%d",&n);
	q=n;
	while (q!=0)
	{
	rem=q%10;
	result=result*10+rem;
	q=q/10;
    }
	if (result==n)
	printf ("The number is a palindrome number");
	else
	printf ("It's not a palindrome number");
	return 0;	
}
