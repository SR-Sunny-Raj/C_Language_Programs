#include <stdio.h>
int main()
{
	int number,q,result=0,mul=1,rem,count=0,cnt;
	printf ("Enter any number to check whether it is an armstrong number or not :  ");
	scanf ("%d",&number);
	q = number;
	while(q!=0)
	{
		q=q/10;
		count++;
	}
	cnt = count;
	q = number;
	while (q!=0)
	{
		rem = q%10;
		while (cnt!=0)
		{
		mul = mul*rem;
		cnt--;
	    }
	result = result+mul;
	cnt = count;
	q=q/10;
	mul=1;
    }
	if (result==number)
	printf ("The number is an armstrong number");
	else
	printf ("It`s not an armstrong number");
	return 0;
}
