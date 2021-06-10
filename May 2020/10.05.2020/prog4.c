#include <stdio.h>
#include <string.h>
int main()
{
	int j,num,count=1,rem;
	static int i;
	char arr[100];
	char brr[100];
	printf ("Enter any number : ");
	scanf ("%d",&num);
	for (i=0;i<count;i++)
	{
		while(num!=0)
		{
	rem = num%10;
	num = num/10;
	if (rem==0)
	{
		while(i<i+4)
		{
	char a = "zero";
	scanf ("%s",&arr[i]);
	i++;
}
    }
	if (rem==1)
	{
		while(i<i+3){
	char b = "one";
	scanf ("%s",&arr[i]);
	i++;
}
    }
	if (rem==2)
	{
		while (i<i+3)
		{
	char c = "two";
	scanf ("%s",&arr[i]);
	i++;
}
    }
	if (rem==3)
	{
		while (i<i+5)
		{
	char d = "three";
	scanf ("%s",&arr[i]);
	i++;
}
    }
	if (rem==4)
	{
		while (i<i+4)
		{
	char e = "four";
	scanf ("%s",&arr[i]);
	i++;
}
    }
	if (rem==5)
	{
		while (i<i+4)
		{
	char f = "five";
	scanf ("%s",&arr[i]);
	i++;
}
    }
	if (rem==6)
	{
		while (i<i+3)
		{
	char g = "six";
	scanf ("%s",&arr[i]);
	i++;
}
    } 
	if (rem==7)
	{
		while (i<i+5)
		{
	char h = "seven";
	scanf ("%s",&arr[i]);
	i++;
}
    }
	if (rem==8)
	{
		while (i<i+5)
		{
	char i = "eight";
	scanf ("%s",&arr[i]);
	i++;
}
    }
	if (rem==9)
	{
		while (i<i+4)
		{
	char j = "nine";
	scanf ("%s",&arr[i]);
	i++;
}
    }
	count++;
	}
	}
	for (j=(i-1);j>=0;j--)
	{
		scanf ("%s",&brr[j]);
	}
	printf ("%s",brr);
	return 0;
}
