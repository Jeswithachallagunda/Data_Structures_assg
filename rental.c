#include <stdio.h>
struct Car {
    int carID;
    char model[30];
    float ratePerDay;
};
int main() {
    struct Car cars[3];
    int days;
    float totalCost;
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Car %d\n", i + 1);
        printf("Car ID: ");
        scanf("%d", &cars[i].carID);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Rental rate per day: ");
        scanf("%f", &cars[i].ratePerDay);
    }
    printf("\nEnter number of rental days: ");
    scanf("%d", &days);

    printf("\n--- Car Rental Details ---\n");
    for (i = 0; i < 3; i++) {
        totalCost = cars[i].ratePerDay * days;

        printf("\nCar ID: %d", cars[i].carID);
        printf("\nModel: %s", cars[i].model);
        printf("\nRate per day: %.2f", cars[i].ratePerDay);
        printf("\nTotal rental cost for %d days: %.2f\n", days, totalCost);
    }

    return 0;
}
