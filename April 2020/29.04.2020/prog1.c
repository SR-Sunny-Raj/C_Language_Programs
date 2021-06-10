#include <stdio.h>
#include <string.h>
int main()
{
	char *s1 = "abcd";
	char *s2 = "abce";
	if(strcmp(s1,s2) < 0)
	{
		printf ("s1 is less than s2");
	}
	else
	{
		printf ("s1 is greater than or equal to s2");
	}
	return 0;
}
