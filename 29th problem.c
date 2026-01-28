#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    switch (1) {
        case 1:
            if (a == 1) {
                c = b * 10;
                break;
            }

        case 2:
            if (a == 2) {
                c = b * 15;
                break;
            }

        case 3:
            if (a == 3) {
                c = b * 20;
                break;
            }
    }

    printf("Fare ₹%d", c);
    return 0;
}
