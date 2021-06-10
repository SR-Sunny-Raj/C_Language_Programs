#include <stdio.h>
int main()
{
	int x,y;
	printf ("Enter any two positive interger to add : \n");
	scanf ("%d %d",&x,&y);
	while (y!=0)
	{
		x++;
		y--;
	}
	printf ("The sum of two numbers is %d : ",x);
	return 0;
}
