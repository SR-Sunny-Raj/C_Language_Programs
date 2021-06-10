#include <stdio.h>
int main()
{
	FILE *fptr;
	fptr = fopen ("E://Text File//file3.txt","r");
	if (fptr == NULL)
	printf ("Error!");
	char str[100];
	fscanf (fptr,"%s",str);
	printf ("%s",str);
	fclose(fptr);
	return 0;
}
