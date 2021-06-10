#include<stdio.h>
int main()
{
int a,*pA,b,*pB,c,*pC;
printf(" Enter any three Integer numbers for a, b and c : ");
scanf("%d %d %d", &a, &b, &c);
pA=&a;
pB=&b;
pC=&c;
if((*pA<*pB)&&(*pA<*pC))
printf("\n a is smallest : %d",*pA);
else
{
if(*pB<*pC)
printf("\n b is smallest : %d",*pB);
else
printf("\n c is smallest : %d",*pC);
}
return 0;
}

