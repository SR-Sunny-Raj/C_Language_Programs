#include<stdio.h>
int main()
{
	FILE *fptr;
	char str[100];
	fptr = fopen("E://Text File//file3.txt","w");
	if (fptr == NULL)
	printf ("Error");
	printf ("Enter the string\n");
	scanf ("%s",str);
	fprintf(fptr,"%s",str);
	fclose(fptr);
	return 0;
}
