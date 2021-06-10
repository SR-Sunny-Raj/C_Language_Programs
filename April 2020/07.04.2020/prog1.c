#include<stdio.h>
#include<conio.h>
int main()
{
	char arr[100], brr[100];
	char *parr,*pbrr;
	int i= 0;
	parr = arr;
	pbrr = brr;
	printf("\n Enter the string:");
	gets(arr);
	while(*parr !='\0')
	{
		*pbrr = *parr;
		parr++, pbrr++;
	}
	*pbrr = '\0';
	printf("\n The copied text is:");
	pbrr = brr;
	while(*pbrr != '\0')
	{
		printf("%c", *pbrr);
		pbrr++;
	}
	getch();
	return 0;
}
