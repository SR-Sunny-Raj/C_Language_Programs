#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr = fopen("E://Text File//file3.txt","w");
	if (fptr == NULL)
	printf ("Error");
	fprintf(fptr,"%s","File Handling");
	fclose(fptr);
	return 0;
}
