#include<stdio.h>
#include<string.h>
struct hotel {
	char name[100] ; 
	char address[200] ; 
	int rooms ;
	char grade ; 
	float price ;
}h1[100];
int main(){
	int size , i , k ,s=1;
	 char c ; 
	printf("Enter the number of hotels : ") ;
	scanf("%d",&size);
	for(i=0 ; i<size;i++)
	{
		printf("\n ------------ No %d hotel information--------------\n ",i+1);
		printf("Enter the name of the hotel : ") ; 
		scanf("%s",&h1[i].name);
		printf("\nEnter the Address of the hotel : ") ; 
		scanf("%s",&h1[i].address);
		printf("\n Please give the grade in between A to D \n ") ; 
		s = 1 ; 
		while(s)
		{
			printf("\n Enter the Grade : ") ; 
			scanf("%s",&h1[i].grade);
			k = (int)h1[i].grade;
		if(k>=65 && k<= 68)
		{
			h1[i].grade=(char)k ;
			s = 0;
		}
		else if(k >=97 && k <= 100)
		{
			 
			h1[i].grade = (char)(k - 32) ; 
			s=0 ;
		}
		else
		{
		printf("\n -------Wrong Input -----\n Please give the grade in between A to D \n ") ; 
		}	
		}
		
		printf("Enter the number of rooms : " ) ;
		scanf("%d",&h1[i].rooms);
		printf("Enter the price : ");
		scanf("%f",&h1[i].price); 		
	}
	for(i=0;i<size;i++)
	{
			printf("\n ------------ No %d hotel information--------------\n ",i+1);
		printf("%s\n",h1[i].name);
		printf("%s\n",h1[i].address);
		printf("%c\n",h1[i].grade);
		printf("%d\n",h1[i].rooms);
		printf("%.2f\n",h1[i].price);
}	
	return 0 ; 
}

