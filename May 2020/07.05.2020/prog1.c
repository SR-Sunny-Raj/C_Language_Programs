#include <stdio.h>
int main()
{
	FILE *fptr;
	fptr = fopen("file3.txt","a");
	if (fptr == NULL)
	printf ("ERROR!");
	fprintf(fptr,"%s","SUNNY RAJ");
	fclose (fptr);
	return 0;
}
