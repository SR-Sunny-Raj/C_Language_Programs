#include<stdio.h>
//Program to convert small alphabet to capital alphabet and also show its ASCII code number
int main()
{
	char ch;char *pch;
	pch=&ch;int b;
	printf("Enter a character: ");
	scanf("%c",&ch);
	*pch=ch;
	b=(int)(*pch);
	if(b>=97 && b<=122)
	{
		b=b-32;
		*pch=(char)b;
	
	printf("\n %c",*pch);
}
	printf("\n %d",b);
	return 0;
}

