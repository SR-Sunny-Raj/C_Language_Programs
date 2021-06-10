#include <stdio.h>
int main()
{
	char a = 'A',b = 'N',c = 'K',d = 'I',e = 'T';
	printf ("%5c%8c%5c%4c%3c%4c%c%c%c%c%4c%c%c%c%c%7c\n",a,b,b,c,c,d,d,d,d,d,e,e,e,e,e,a);
	printf ("%4c%2c%7c%c%4c%4c%2c%7c%8c%8c%2c\n",a,a,b,b,b,c,c,d,e,a,a);
	printf ("%3c%c%c%c%c%6c%3c%2c%4c%c%8c%8c%7c%c%c%c%c\n",a,a,a,a,a,b,b,b,c,c,d,e,a,a,a,a,a);
	printf ("%2c%6c%5c%4c%c%4c%2c%7c%8c%6c%6c\n",a,a,b,b,b,c,c,d,e,a,a);
	printf ("%c%8c%4c%5c%4c%3c%4c%c%c%c%c%6c%5c%8c\n",a,a,b,b,c,c,d,d,d,d,d,e,a,a);
	return 0;
}


