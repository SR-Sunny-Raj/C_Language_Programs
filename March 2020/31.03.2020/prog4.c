#include<stdio.h>
int main()
{
 int a,b,*p1,*p2,area;
 printf("\n Enter The Length And Width Of The Rectangle: ");
 scanf("%d%d",&a,&b);
 p1=&a;
 p2=&b;
 area=(*p1)*(*p2);
 printf("\n Area of the Rectangle =%d",area);
 return 0;
}

