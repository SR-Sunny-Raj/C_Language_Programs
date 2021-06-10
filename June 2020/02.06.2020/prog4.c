#include <stdio.h>
int main()
{
	int n,count=0;
	char arr[30],A,E,I,O,U,a,e,i,o,u;
	printf ("Enter your name : ");
	for (n=0;n<30;n++)
	{
		scanf ("%s",arr[n]);
	}
	for (n=0;n<30;n++)
	{
		if (arr[n] == 'A' || 'E' || 'I' || 'O' || 'U' || 'a' || 'e' || 'i' || 'o' || 'u')
		{
			count++;
		}
		else
		{
			count;
		}
	}
	printf ("The number of vowels in the string are : %d",count);
	return 0;
}
