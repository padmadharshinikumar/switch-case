#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    switch (1) {
        case 1:
            if (b == 1) {
                c = 50;
                break;
            }

        case 2:
            if (b == 2 && a < 1000) {
                c = 100;
                break;
            }

        case 3:
            if (b == 2 && a >= 1000) {
                c = 0;
                break;
            }
    }

    printf("Delivery ₹%d", c);
    return 0;
}
