#include<stdio.h>
typedef struct num
{int a;
int b;
int c;
}number;
number xnum;
int main()
{
	int smallest;
printf("\n Enter the numbers: ");
scanf("%d",&xnum.a);
scanf("%d",&xnum.b);
scanf("%d",&xnum.c);

if(xnum.a<xnum.b && xnum.a<xnum.c)
{
	smallest=xnum.a;
	printf("\nThe smallest value is=%d",smallest);
}

else if(xnum.b<xnum.a && xnum.b<xnum.c)
{
	smallest=xnum.b;
	printf("\nThe smallest value is=%d",smallest);
}
else if(xnum.c<xnum.a && xnum.c<xnum.b)
{
	smallest=xnum.c;
	printf("\nThe smallest value is=%d",smallest);
}
else if(xnum.a==xnum.b && xnum.a==xnum.c)
{
  smallest=xnum.a;
	printf("\nThe smallest value is=%d",smallest);	
}
return 0;
}

