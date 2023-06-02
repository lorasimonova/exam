#include <stdio.h>
#include <stdlib.h>

struct Car {
    char* brand;
    char* model;
    int price;
};

int sumCarPrice(struct Car cars[], int n) {
    int tot = 0;
    for (int i = 0; i < n; i++) {
        tot += cars[i].price;
    }
    return tot;
}

int main() {
    struct Car cars[3];

    cars[0].brand = "Toyota";
    cars[0].model = "Camry";
    cars[0].price = 25000000;

    cars[1].brand = "Honda";
    cars[1].model = "Fit";
    cars[1].price = 20000000;

    cars[2].brand = "subaru";
    cars[2].model = "Forester";
    cars[2].price = 35000;

    int price = sumCarPrice(cars, 3);
    printf("%d\n", price);

    return 0;
}
