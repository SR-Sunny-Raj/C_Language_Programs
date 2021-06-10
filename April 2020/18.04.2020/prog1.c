#include <stdio.h>
int main()
{
	int i = 24;
	int *ptr = &i;
	printf ("The address of variable i is : %p",ptr);
	return 0;
}
