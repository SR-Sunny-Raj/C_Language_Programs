#include <stdio.h>
//CODED BY SUNNY RAJ ON 01-02-2020 //
int main()
{
	int marks;
	printf ("Enter Marks Obtained :");
	scanf ("%d",&marks);
	if (marks>=90)
	{
		printf ("\n GRADE : O");
    }
	else if (marks>=80)
	{
		printf ("\n GRADE : E");
	}
	else if (marks>=70)
	{
		printf ("\n GRADE : V");
	}
	else if (marks>=65)
	{
		printf ("\n GRADE : G");
	}
	else if (marks>=60)
	{
		printf ("\n GRADE : A");
	}
	else if (marks>=50)
	{
		printf ("\n GRADE : S");
	}
	else if (marks>=33)
	{
		printf ("\n GRADE : P");
	}
	else
	{
		printf ("\n FAIL");
	}
	 printf ("\n *****************************************");
	 printf ("\n %20s","GRADING SCHEME :-");
	 printf ("\n MARKS >=90 : (O) OUTSTANDING ");
	 printf ("\n MARKS >=80 : (E) EXCELLENT");
	 printf ("\n MARKS >=70 : (V) VERY GOOD");
	 printf ("\n MARKS >=65 : (G) GOOD");
	 printf ("\n MARKS >=60 : (A) AVERAGE");
	 printf ("\n MARKS >=50 : (S) SATISFACTORY");
	 printf ("\n MARKS >=33 : (P) POOR");
	 printf ("\n MARKS <33 : FAIL");
	 printf ("\n *****************************************");
	 getchar ();
	 return 0;
}
