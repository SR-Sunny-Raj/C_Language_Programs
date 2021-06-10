#include <stdio.h>
int main ()
{
    int a;
	printf("\n Enter any number from 1 to 5 :");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\n ONE");
			break;
		case 2:
			printf("\n TWO");
			break;
		case 3:
			printf("\n THREE");
			break;
		case 4:
			printf("\n FOUR");
			break;
		case 5:
			printf("\n FIVE");
			break;
		default :
			printf ("\n NULL");
			break;		
	}
}
