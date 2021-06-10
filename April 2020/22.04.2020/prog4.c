#include<stdio.h>
#include<stdlib.h>
struct complex
{
	int real,imag;
};
  int main()
{
	int choice;
	struct complex x,y,z;
	{
    printf("Press 1 to add two complex numbers.\n");
    printf("Press 2 to subtract two complex numbers.\n");
    printf("Press 3 to multiply two complex numbers.\n");
    printf("Press 4 to divide two complex numbers.\n");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice>=1 && choice<=4)
    {
        printf("Please enter the two real and imaginary complex numbers (a+ib) :\n");
        printf("\nReal Number:");
        scanf("%d", &x.real);
        printf("\nImaginary Number:");
        scanf("%d", &x.imag);
        printf("\nPlease enter the next two real and imaginary complex numbers (c+id) :\n");
        printf("\nReal Number:");
        scanf("%d", &y.real);
        printf("\nImaginary Number:");
        scanf("%d", &y.imag);
         printf("\nFirst Complex Number:%d+%di",x.real, x.imag);
        printf("\nSecond Complex Number:%d+%di\n",y.real, y.imag);
	}
     if (choice==1)
    {    
        z.real=x.real+y.real;
        z.imag=x.imag+y.imag;
        printf("\nThe result of the addition of the two complex numbers:%d+%di\n",z.real, z.imag);  
    }
    else if (choice==2)
    {
        z.real=x.real-y.real;
        z.imag=x.imag-y.imag;
        printf("\nThe result of the subtraction of the two complex numbers:%d+%di\n",z.real, z.imag);  
    }
    else if (choice==3)
    {
        z.real=x.real*y.real-x.imag*y.imag;
        z.imag=x.imag*y.real+x.real*y.imag;
        printf("\nThe result of the multiplication of the two complex numbers:%d+%di\n",z.real, z.imag);  
    }
    else if (choice==4)
    {   z.real=x.real/y.real-x.imag/y.imag;
        z.imag=x.imag/y.real+x.real/y.imag;
        printf("\nThe result of the division of the two complex numbers:%d+%di\n",z.real, z.imag);  
    } 
	    else 
    {
        printf("Invalid Choice");
    }
}
};

