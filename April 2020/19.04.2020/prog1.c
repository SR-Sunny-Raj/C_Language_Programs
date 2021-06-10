#include <stdio.h>
//Program to calculate sum of an array using POINTERS
int main()
{
	int sum=0,*p;
	int arr[]={1,5,24,2,46,75};
	for (p=&arr[0];p<=&arr[5];p++)
	{
		sum+=*p;
	}
	printf ("The sum of the array elements are : %d",sum);
	return 0;
}
