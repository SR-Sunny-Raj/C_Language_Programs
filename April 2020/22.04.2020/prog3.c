#include<stdio.h>
#include<math.h>
typedef struct pnt
{
int x;
int y;
}Point;
Point pt1,pt2;
int main()
{
 float distance;
 printf("\n enter the values");
 scanf("%d",&pt1.x);
 scanf("%d",&pt1.y);
 scanf("%d",&pt2.x);
 scanf("%d",&pt2.y);
 distance=sqrt(pow((pt1.x-pt2.x),2)+pow((pt1.y-pt2.y),2));
 printf("\n%f",distance);
return 0;
}

