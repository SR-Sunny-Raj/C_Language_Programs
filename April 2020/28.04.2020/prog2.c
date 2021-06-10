#include<stdio.h>
struct vector{
	float a ; 
	float b ;
}v1,v2;
void readVector(struct vector *v1,struct vector *v2);
void printVector(struct vector v1,struct vector v2);	
void vectorAddition(struct vector *v1 , struct vector *v2);
void factorBy10(struct vector *v1,struct vector *v2);
int main()
{
	
	readVector(&v1,&v2);
	printVector(v1,v2);
	vectorAddition(&v1,&v2);
	factorBy10(&v1,&v2);	
	return 0 ; 
}
void readVector(struct vector *v1,struct vector *v2)
{
	printf("Enter the value of of x and y for the first vector : ");
	scanf("%f%f",&v1->a,&v1->b);
	printf("\nEnter the value of of x and y for the Second vector : ");
	scanf("%f%f",&v2->a,&v2->b);
}
void printVector(struct vector v1,struct vector v2)
{
	printf("Value of x : %.2f \n value of y :  %.2f \n---------- first vector--------------\n :  ",v1.a,v1.b);
	printf("\nValue of x : %.2f \n value of y :  %.2f \n---------- Second vector--------------\n :  ",v2.a,v2.b);
}
void vectorAddition(struct vector *v1,struct vector *v2){
printf("\n After Addition \n "); 
	struct vector v3 ; 
	v3.a = v1->a + v2->a  ;
	v3.b = v1->b + v2->b  ;
	printf("%.2f\t %.2f",v3.a,v3.b) ;
}
void factorBy10(struct vector *v1,struct vector *v2){
	
printf("\n Factor by 10  \n ");
	v1->a = v1->a*10 ;
	v1->b =v1->b*10 ;
	v2->a=v2->a*10;
	v2->b=v2->b*10;	
	printf("\n First vector : %.2f\t %.2f \n Second vector : %.2f \t %.2f",v1->a,v1->b,v2->a,v2->b) ;
}

