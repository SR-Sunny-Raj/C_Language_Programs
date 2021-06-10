#include <stdio.h>
int main()
{
	FILE *fptr;
	int i;
	char str[] = "C Programming Language";
	fptr = fopen ("E://Text File//file4.txt","w");
	if (fptr == NULL)
	printf ("Error");
	for (i=0;str[i]!='\0';i++)
		fputc(str[i],fptr);
	fclose (fptr);
	return 0;
}
