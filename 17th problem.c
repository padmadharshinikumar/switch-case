#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);   // vehicle type
    scanf("%d", &b);   // hours

    switch (a) {
        case 1:   // Bike
            c = 10 * b;
            break;

        case 2:   // Car
            c = 20 * b;
            break;

        default:  // Invalid vehicle type
            c = 20 * b;
    }

    printf("Parking Fee ₹%d", c);
    return 0;
}

