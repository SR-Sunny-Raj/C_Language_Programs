#include <stdio.h>
int main()
{
	FILE *fptr;
	fptr = fopen("E://Text File//file2.txt","r");
	char str[100];
	fgets (str,10,fptr);
	printf ("%s",str);
	fclose (fptr);
	return 0;
}
