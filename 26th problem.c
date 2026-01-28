#include <stdio.h>

int main() {
    int a, b = 0;

    scanf("%d", &a);

    switch (1) {
        case 1:
            if (a <= 5) {
                b = a * 50;
            }
            break;

        case 2:
            if (a > 5 && a <= 10) {
                b = a * 100;
            }
            break;

        case 3:
            if (a > 10) {
                b = a * 200;
            }
            break;
    }

    printf("Fine ₹%d", b);
    return 0;
}
