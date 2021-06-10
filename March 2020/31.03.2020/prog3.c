#include<stdio.h>
int main()
{
	int m,n,diff=0;
	int *pm,*pn;
	printf("Enter two numbers: ");
	scanf("%d %d",&m,&n);
	pm=&m;
	pn=&n;
	if(m>n)
	{
		diff=*pm - *pn;
	}
	else
	{
		diff=*pm - *pn;
	}
	printf("\n %d",diff);
	return 0;
}

