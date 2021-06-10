#include <stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	fptr = fopen("E://Text File//file1.txt","r");
	while (1)
	{
	ch = fgetc (fptr);
	if (ch == EOF)
	break;
	printf ("%c",ch);
    }  
	fclose (fptr);
	return 0;
}
