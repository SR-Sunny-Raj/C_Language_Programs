#include <stdio.h>
int main()
{
	int a,b,sign,add;
	printf ("Enter the first number : ");
	scanf ("%d",&a);
	printf ("\nEnter the second number : ");
	scanf ("%d",&b);
	printf ("choose 1,2,3,4 to perform add,subtract,multiply and divide respectively : ");
	scanf ("%d",&sign);
	if (sign==1)
	printf ("Result : %d",a+b);
	else if (sign==2)
	printf ("Result : %d",a-b);
	else if (sign==3)
	printf ("Result : %d",a*b);
	else if (sign==4)
	printf ("Result : %d",a/b);
	return 0;
}
