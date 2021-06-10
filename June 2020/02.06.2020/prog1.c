#include <stdio.h>
#include <string.h>
//Here we are storing the information about two Cars
struct car
{
	int fuel_cap;
	int seating_cap;
	float city_mileage;
};
int main()
{
	int i;
	struct car c[2];
	for (i=0;i<2;i++)
	{
		printf ("Enter the car %d Fuel Capacity : ",i+1);
		scanf ("%d",&c[i].fuel_cap);
		printf ("Enetr the car %d Seating Capacity : ",i+1);
		scanf ("%d",&c[i].seating_cap);
		printf ("Enter the car %d City Mileage : ",i+1);
		scanf ("%f",&c[i].city_mileage);
	}
	printf ("\n");
	for(i=0;i<2;i++)
	{
	printf("\n"); 
	printf ("The details of car %d is :\n",i+1);
	printf ("Fuel Tank Capacity : %d\n",c[i].fuel_cap);
	printf ("Seating Capacity : %d\n",c[i].seating_cap);
	printf ("City Mileage : %f\n",c[i].city_mileage);
    }
    return 0;
}
