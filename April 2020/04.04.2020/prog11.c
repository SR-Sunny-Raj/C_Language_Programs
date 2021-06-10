#include <stdio.h>
int fun();
int main()
{
	char c = fun();
	printf ("Character is : %c",c);
	return 0;
}
int fun()
{
	return 'a';
}
