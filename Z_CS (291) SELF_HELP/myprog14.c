#include <stdio.h>
int main()
{
	int c=0,min,max,sum;
	float avg;
	printf ("Enter the minimum and maximum value : ");
	scanf ("%d %d",&min,&max);
	while (min<=max)
	{
		sum=sum+min;
		min++;
		c++;
	}
	avg = (float) sum/c;
	printf ("We get the average : %4.2f",avg);
	return 0;
}
