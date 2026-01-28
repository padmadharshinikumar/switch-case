#include <stdio.h>

int main() {
    int a;
    int c = 0;

    scanf("%d", &a);

    switch (1) {
        case 1:
            if (a == 1) {
                c = 1500;
                break;
            }

        case 2:
            if (a == 2) {
                c = 4000;
                break;
            }

        case 3:
            if (a == 3) {
                c = 7000;
                break;
            }
    }

    printf("Membership Fee ₹%d", c);
    return 0;
}
