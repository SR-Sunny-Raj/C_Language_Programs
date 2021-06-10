#include<stdio.h>
int main()
{
 int x,y, *large, *xptr,*yptr;
printf("Enter the value of x and y :");
scanf("%d%d",&x,&y);
xptr=&x;
yptr=&y;
if(*xptr>*yptr)
large=xptr;
else
large=yptr;
printf("The largest nmuber is : %d",*large);
}

