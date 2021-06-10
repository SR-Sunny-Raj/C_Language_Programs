#include<stdio.h>
struct Distance {
    int kmtr;
    int mtr;
} d1, d2, sumOfDistances, subtractOfDistances;

int main() {
    printf("Enter information for 1st distance\n");
    printf("Enter kmtr: ");
    scanf("%d", &d1.kmtr);
    printf("Enter mtr: ");
    scanf("%d", &d1.mtr);
    printf("\nEnter information for 2nd distance\n");
    printf("Enter kmtr: ");
    scanf("%d", &d2.kmtr);
    printf("Enter mtr: ");
    scanf("%d", &d2.mtr);

    sumOfDistances.kmtr=d1.kmtr+d2.kmtr;
    sumOfDistances.mtr=d1.mtr+d2.mtr;
    subtractOfDistances.kmtr=d1.kmtr-d2.kmtr;
    subtractOfDistances.mtr=d1.mtr-d2.mtr;   
    // If mtr is greater than 1000, changing it to kmtr.
    if (sumOfDistances.mtr>=1000) {
        sumOfDistances.mtr = sumOfDistances.mtr%1000;
        ++sumOfDistances.kmtr;
    }
    if (subtractOfDistances.mtr<0) {
        subtractOfDistances.mtr = 1000+subtractOfDistances.mtr;
        subtractOfDistances.kmtr--;
    }
    printf("\nSum of distances = %d km %d m", sumOfDistances.kmtr, sumOfDistances.mtr);
    printf("\nSubtract of distances = %d km %d m", subtractOfDistances.kmtr, subtractOfDistances.mtr);

    return 0;}

