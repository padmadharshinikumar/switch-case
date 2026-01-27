#include <stdio.h>

int main() {
    int a, age;
    float fare = 0;

    scanf("%d", &a);
    scanf("%d", &age);

    switch (a) {
        case 1:
            fare = 300;
            if (age < 12)
                fare = fare * 0.5;
            else if (age >= 60)
                fare = fare * 0.67;
            break;

        case 2:
            fare = 1000;
            if (age < 12)
                fare = fare * 0.5;
            break;

        default:
            return 0;
    }

    printf("Fare ₹%.0f", fare);
    return 0;
}
