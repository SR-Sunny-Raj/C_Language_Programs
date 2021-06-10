#include <stdio.h>
//Program to check whether a year is a leap year or not
int main()
{
	int year;
	printf ("Enter any year : ");
	scanf ("%d",&year);
	if (year%400==0 || year%4==0)
	printf ("%d is a leap year",year);
	else if (year%100==0 || year%4!=0)
	printf ("%d is not a leap year",year);
	return 0;
}
