#include <stdio.h>
#pragma pack(1)
struct abc
{
	int a;
	char b;
	int c;
};
int main()
{
	struct abc x;
	printf ("%d",sizeof(x));
	return 0;
}
