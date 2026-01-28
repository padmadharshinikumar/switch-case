#include <stdio.h>

int main() {
    int a;
    int c = 0;

    scanf("%d", &a);

    switch (1) {
        case 1:
            if (a == 1) {
                c = 40;
                break;
            }

        case 2:
            if (a == 2) {
                c = 120;
                break;
            }

        case 3:
            if (a == 3) {
                c = 0;
                break;
            }
    }

    printf("Delivery Charge ₹%d", c);
    return 0;
}
