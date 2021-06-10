#include <stdio.h>
// FIBONACCI SERIES
int main()
{
	int a=0,b=1,n,result,i;
	printf ("Enter the number of terms upto which you want your fibonacci series : ");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf ("%d  \a",a); //Here \a is just given for fun shake which produces an audible sound upon execution 
		result = a +b;
		a = b;
		b = result;
	}
	return 0;
}
