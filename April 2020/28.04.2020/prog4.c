#include <stdio.h>
struct point{
	int x  ; 
	int y ; 
}co;
void main()
{
		printf("Input the values for X and Y coordinate : ");
	scanf("%d %d",&co.x,&co.y);

if( co.x > 0 && co.y > 0)
	  printf("The coordinate point (%d,%d) lies in the First quandrant.\n",co.x,co.y);
	else if( co.x < 0 && co.y > 0)
	  printf("The coordinate point (%d,%d) lies in the Second quandrant.\n",co.x,co.y);
	else if( co.x < 0 && co.y < 0)
	  printf("The coordinate point (%d, %d) lies in the Third quandrant.\n",co.x,co.y);
	else if( co.x > 0 && co.y < 0)
	  printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n",co.x,co.y);
	else if( co.x == 0 && co.y == 0)
	  printf("The coordinate point (%d,%d) lies at the origin.\n",co.x,co.y);
} 

