#include <stdio.h>

int main() {
    int a, b;
    int c = 0, d = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    switch (1) {
        case 1:
            if (a == 1 && (b == 11 || b == 12)) {
                c = 199;
                d = 20;
                break;
            }

        case 2:
            if (a == 1 && b == 13) {
                c = 199;
                d = 0;
                break;
            }

        case 3:
            if (a == 2 && (b == 11 || b == 12)) {
                c = 399;
                d = 20;
                break;
            }

        case 4:
            if (a == 2 && b == 13) {
                c = 399;
                d = 0;
                break;
            }
    }

    printf("Pay ₹%d", c - d);
    return 0;
}
