#include <stdio.h>
int main ()
{
	int i=0,j=1;
	printf ("\n %d",i++ && ++j);
	printf ("\n %d %d",i,j);
	return 0;
}
