#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    switch (1) {
        case 1:
            if (a == 1) {
                printf("Under Warranty");
                break;
            }

        case 2:
            if (a == 2) {
                printf("Limited Warranty");
                break;
            }

        case 3:
            if (a == 3) {
                printf("Out of Warranty");
                break;
            }
    }

    return 0;
}
