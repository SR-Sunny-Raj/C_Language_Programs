#include <stdio.h>
int areaofrect(int length,int width)
{
	int area;
	area=length*width;
	return area;
}
int main()
{
int l,w;
printf ("Enter the lenght and width of the rectangle : \n");
scanf ("%d %d",&l,&w);
int area=areaofrect(l,w);
printf("Area of the rectangle is : %d",area);
return 0;
}

