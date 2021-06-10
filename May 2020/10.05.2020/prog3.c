#include <stdio.h>
#include <math.h>
int main()
{
	int num,base,rem,sum=0,a=0;
	printf ("Enter any Decimal number : ");
	scanf ("%d",&num);
	printf ("Enter any Base : ");
	scanf ("%d",&base);
	if (base<10)
	{
	    while (num>0)
	        {
		        rem = num%base;
	            sum = sum + rem * pow(10,a);
		        num = num/base;
		        a++;
	        }
	printf ("%d",sum);
    }
    else
    {
    	long int q;
	    int i=1,j,temp;
	char hexadecimalNumber[100];
	q = num;
	while(q!=0) 
	{
		temp = q % base;
		if( temp < 10)
		    temp =temp + 48; 
		else
		    temp = temp + 55;
		hexadecimalNumber[i++]= temp;
		q = q / base;
	}
	for (j = i -1 ;j> 0;j--)
	    printf("%c",hexadecimalNumber[j]);
	}
	return 0;
}
