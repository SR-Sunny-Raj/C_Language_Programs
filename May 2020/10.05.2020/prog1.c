#include <stdio.h>
int main()
{
	int a,b,c,max;
	printf ("Enter any Three number : ");
	scanf ("%d %d %d",&a,&b,&c);
	max = a>(b>c?b:c)?a:(b>c?b:c);
	printf ("The largest number among the three numbers is : %d",max);
	return 0;
}
