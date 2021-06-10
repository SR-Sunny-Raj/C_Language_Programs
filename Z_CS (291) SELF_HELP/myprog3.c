#include <stdio.h>
int main()
{
int Age;
printf ("Enter your Age : ");
scanf ("%d",&Age);
    if (Age>=50)
    {
    	printf ("\n SENIOR CITIZEN");
    }
    else if (Age>=18)
	{
		printf ("\n ADULT");
    }
    else
	{
		printf ("\n TEENAGER");
    }
    getch();
    return 0;
}

