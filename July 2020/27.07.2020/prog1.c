#include <stdio.h>
struct p
{
int x[2];
};
struct q
{
int*x;
};
int main()
{
struct p p1 ={1,2};
struct q *ptr1;
ptr1->x =(struct q*)&p1.x;
printf("%d\n", ptr1->x[1]);
}
