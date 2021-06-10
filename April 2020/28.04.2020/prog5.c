#include<stdio.h>
#include<string.h>
struct emp{
	long emp_id ; 
	char first_name[20];
	char middle_name[15];
	char last_name[15];
	char area[50];
	char city[50];
	char state[50];
}x[100];
int main()
{
	int i ,size; 
	printf("Enter the no of Employees : ");
	scanf("%d",&size);
	for(i=0 ; i < size ; i++)
	{
		printf("\n-------------No %d Employee details ------------\n ",i+1);
		printf("\nEnter the empplyee_id ");
		scanf("%d",&x[i].emp_id);
		printf("\nEnter the first name : ");
		scanf("%s",&x[i].first_name);
		printf("\nEnter the middle name : ");
		scanf("%s",&x[i].middle_name);
		printf("\nEnter the last name : ");
		scanf("%s",&x[i].last_name);
		printf("\nEnter the Area : ");
		scanf("%s",&x[i].area);
		printf("\nEnter the city: ");
		scanf("%s",&x[i].city);
		printf("\nEnter the State : ");
		scanf("%s",&x[i].state);
	}

	for(i=0 ; i < size ; i++)
	{
		printf("\n-------------No %d Employee details ------------\n ",i+1);
		printf("%d\n",&x[i].emp_id);
		printf("%s\n",&x[i].first_name);
		printf("%s\n",&x[i].middle_name);
		printf("%s\n",&x[i].last_name);
		printf("%s\n",&x[i].area);
		printf("%s\n",&x[i].city);
		printf("%s\n",&x[i].state);
		
	}	
		return 0 ; 
}

