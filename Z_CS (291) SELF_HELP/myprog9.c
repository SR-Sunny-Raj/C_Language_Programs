#include <stdio.h>
//Determination Of Age Group//
int main()
{
	int Age;
	printf ("\n Enter your Age :");
	scanf ("%d",&Age);
	if (Age>=55)
	{
	printf ("\n AGE GROUP : SENIOR CITIZEN");
    }
    else if (Age<18)
    {
    printf ("\n AGE GROUP : TEENAGER");
    }
    else
    {
    printf ("\n AGE GROUP : ADULT");
	}
	getch();
}
