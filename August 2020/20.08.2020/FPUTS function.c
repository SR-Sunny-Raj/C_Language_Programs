#include<stdio.h>
int main()
{
	FILE *fptr;
	char str[100];
	fptr = fopen("E://Text File//text5.txt","w");
	if (fptr == NULL)
	printf ("Error!");
	printf ("Enter the string\n");
	scanf ("%s",str);
	fputs(str,fptr);
	fclose (fptr);
	return 0;
}
