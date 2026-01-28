#include <stdio.h>

int main() {
    int a;
    int c = 0;

    scanf("%d", &a);

    switch (1) {
        case 1:
            if (a == 1) {
                c = 800;
                break;
            }

        case 2:
            if (a == 2) {
                c = 1200;
                break;
            }

        case 3:
            if (a == 3) {
                c = 1800;
                break;
            }
    }

    printf("Transport Fee ₹%d", c);
    return 0;
}
