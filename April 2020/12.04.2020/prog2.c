#include <stdio.h>
int main()
{
	int E;
	int arr[]={10,20,45,14,78,67,78,89,9,5,87,9,6786,87,45,32,76,8,4,5,7,54,0,6,8,3,6,76,45,87,6,9,1,2,};
	E=sizeof(arr)/sizeof(arr[0]);
	printf ("\nTheir are total %d number of elements in our array",E);
	return 0;
}
