#include <stdio.h>
//WE WILL GET THE SOLUTION BASED ON EQUATION : a+b*c-d //
int main ()
{
int a,b,c,d,e;
printf ("WE WILL GET THE SOLUTION BASED ON EQUATION : a+b*c-d");
printf ("\n Enter the value of a :");
scanf ("%d",&a);
printf ("\n Enter the value of b :");
scanf ("%d",&b);
printf ("\n Enter the value of c :");
scanf ("%d",&c);
printf ("\n Enter the value of d :");
scanf ("%d",&d);
e = a+b*c-d;
printf ("\n On solving the equation : %d+%d*%d-%d",a,b,c,d);
printf ("\n we get the result : %d",e);
return (0);
}
